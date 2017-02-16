#include <iostream>
#include <iterator>
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

StrVec& StrVec::operator= (const StrVec &sv)
{
	auto newdata = AllocateNCopy (sv.Begin (), sv.End ());
	Free ();
	elem = newdata.first;
	first_empty = cap = newdata.second;

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

void StrVec::PushBack (std::string &&s)
{
	Check ();
	alloc.construct (first_empty++, std::move (s));
	std::cout << "move construct function" << std::endl;
}
void StrVec::Reallocate ()
{
	auto new_capacity = Size () ? 2 * Size() : 1;
	auto first = alloc.allocate (new_capacity);
	auto last = uninitialized_copy (std::make_move_iterator(Begin ()), std::make_move_iterator (End ()), first);
	Free ();

	elem = first;
	first_empty = last;
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
