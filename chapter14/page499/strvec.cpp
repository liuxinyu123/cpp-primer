#include <iostream>
#include <utility>
#include <initializer_list>
#include "strvec.h"

std::allocator<std::string> StrVec::alloc;

StrVec::StrVec (const StrVec &sv)
{
	auto data = Allocate_N_Copy (sv.Begin (), sv.End ());
	element = data.first;
	first_empty = capacity = data.second;
}

StrVec::StrVec (StrVec &&sv)
{
	auto data = Allocate_N_Copy (sv.Begin (), sv.End ());
	element = data.first;
	first_empty = capacity = data.second;

	sv.element = sv.first_empty = sv.capacity = nullptr;
}

StrVec& StrVec::operator= (const StrVec &sv)
{
	auto data = Allocate_N_Copy (sv.Begin (), sv.End ());
	Free ();
	element = data.first;
	first_empty = capacity = data.second;

	return *this;
}

StrVec& StrVec::operator= (StrVec &&sv)
{
	auto data = Allocate_N_Copy (sv.Begin (), sv.End ());
	Free ();
	element = data.first;
	first_empty = capacity = data.second;
	
	sv.element = sv.first_empty = sv.capacity = nullptr;

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

void StrVec::PopBack ()
{
	if (Empty ())
		return;
	alloc.destroy (first_empty--);
}

void StrVec::Free ()
{
	if (element)
	{
		for (auto p = first_empty; p != element;)
			alloc.destroy (--p);
		alloc.deallocate (element, capacity - element);
	}
}

std::pair<std::string*, std::string*> StrVec::Allocate_N_Copy (const std::string *b, const std::string *e)
{
	auto data = alloc.allocate (e - b);
	
	return {data, std::uninitialized_copy (b, e, data)};	
}

void StrVec::Check ()
{
	if (Size () == Capacity ())
		Reallocate ();
}

void StrVec::Print () const
{
	if (Empty ())
		return;
	
	for (auto p = element; p != first_empty;)
		std::cout << *p++ << " ";
	std::cout << std::endl;	
}

void StrVec::Reallocate ()
{
	auto new_capacity =  Capacity () ? 2 * Capacity () : 1;
	auto new_data = alloc.allocate (new_capacity);
	auto dest = new_data;
	auto src = element;

	for (size_t i = 0; i < Size (); ++i)
		alloc.construct (dest++, std::move (*src++));
	Free ();

	element = new_data;
	first_empty = dest;
	capacity = element + new_capacity;
}

StrVec& StrVec::operator= (std::initializer_list<std::string> il)
{
	auto data = Allocate_N_Copy (il.begin (), il.end ());
	Free ();
	
	element = data.first;
	first_empty = capacity = data.second;

	return *this;
}
