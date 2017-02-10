#include <
#include "strblobptr.h"
std::shared_ptr<std::vector<std::string>> 
StrBlobPtr::Check (std::size_t i, const std::string &msg) const
{
	auto ret = wptr.lock ();

	if (!ret)
		throw std::runtime_error ("unbound StrBlobPtr");
	if (i >= ret -> size ())
		throw std::out_of_range (msg);
	return ret;
}

std::string& StrBlobPtr::Deref () const
{
	auto p = Check (curr, "dereference past end");
	return *p[curr];
}

StrBlobPtr& StrBlobPtr::Increment ()
{
	Check (curr, "Increment past end of StrBlobPtr");
	++curr;

	return *this;
}


