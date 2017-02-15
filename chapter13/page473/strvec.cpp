#include <iostream>
#include <memory>
#include <utility>
#include "strvec.h"

std::allocator<std::string> StrVec::alloc;

StrVec::StrVec (const StrVec &sv)
{
	auto newdata = AllocateNCopy (sv.Begin (), sv.End ());
	elem = newdata.first;
	first_empty = cap = newdata.second;	
}

StrVec::StrVec (StrVec &&sv) noexcept 
	:elem (sv.elem), first_empty (sv.first_empty), cap (sv.cap)
{
	elem = first_empty = cap = nullptr;
}

StrVec& StrVec::operator= (const StrVec &sv)
{
	auto newdata = AllocateNCopy (sv.Begin (), sv.End ());
	Free ();
	elem = newdata.first;
	first_empty = cap = newdata.second;

	return *this;
}

StrVec& StrVec::operator= (StrVec &&sv) noexcept
{
	if (this != &sv)
	{
		Free ();
		elem = sv.elem;
		first_empty = sv.first_empty;
		cap = sv.cap;
		
		sv.elem = sv.first_empty = sv.cap = nullptr;
	}

	return *this;
}

StrVec::~StrVec ()
{
	Free ();
}

void StrVec::PushBack (const std::string &s)
{
	Check ();
	alloc.construct (first_empty++, s);
}

void StrVec::Reallocate ()
{
	auto new_capacity = Size () ? 2 * Size() : 1;
	auto newdata = alloc.allocate (new_capacity);
	auto dest = newdata;
	auto src = elem;

	for (size_t i = 0; i != Size (); ++i)
		alloc.construct (dest++, std::move (*src++));

	Free ();

	elem = newdata;
	first_empty = dest;
	cap = elem + new_capacity;

}

void StrVec::Free ()
{
	if (elem)
	{
		for (auto p = first_empty; p != elem; )
			alloc.destroy (--p);
		alloc.deallocate (elem, cap - elem);
	}
}
std::pair<std::string*, std::string*> StrVec::AllocateNCopy (const std::string *b, const std::string *e)
{
	auto newdata = alloc.allocate (e - b);

	return {newdata, uninitialized_copy (b, e, newdata)};
}

void StrVec::Print ()
{
	auto p = elem;
	while (p != first_empty)
		std::cout << *p++ << " ";
	std::cout << std::endl;
}

void StrVec::PopBack ()
{
	if (Size ())
	{
		alloc.destroy (first_empty--);
	}
}
