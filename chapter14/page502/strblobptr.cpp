#include <stdexcept>
#include "strblobptr.h"
#include "strblob.h"

std::string& StrBlobPtr::Deref () const
{
	auto p = Check (curr, "Deref pass end");
	return (*p)[curr];
}

StrBlobPtr& StrBlobPtr::Incr ()
{
	Check (curr, "incr past end of StrBlobPtr");
	++curr;

	return *this;
}

std::shared_ptr<std::vector<std::string>> 
	StrBlobPtr::Check (std::size_t i, const std::string &msg) const 
{
	auto p = wptr.lock ();

	if (!p)
		throw std::runtime_error ("unbound StrBlobPtr");
	if (curr >= p -> size ())
		throw std::out_of_range (msg);

	return p;
}

StrBlobPtr& StrBlobPtr::operator++ ()
{
	Check (curr, "incr past end of StrBlobPtr");
	++curr;

	return *this;
}

StrBlobPtr& StrBlobPtr::operator-- ()
{
	--curr;
	Check (curr, "decr past begin of StrBlobPtr");

	return *this;
}

StrBlobPtr StrBlobPtr::operator++ (int)
{
	auto p = *this;
	++*this;

	return p;
}

StrBlobPtr StrBlobPtr::operator-- (int)
{
	auto p = *this;
	--*this;
	
	return p;
}
