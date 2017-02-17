#include <iostream>
#include <memory>
#include <stdexcept>
#include "strblob.h"
#include "strblobptr.h"

StrBlob::StrBlob ()
	:data (std::make_shared<std::vector<std::string>> ()) {}

StrBlob::StrBlob (std::initializer_list<std::string> il)
	:data (std::make_shared<std::vector<std::string>> (il)) {}

void StrBlob::Check (size_type i, const std::string &msg) const
{	
	if (i >= Size ())
		throw std::out_of_range (msg);
}

void StrBlob::PopBack ()
{
	Check (0, "PopBack on empty StrBlob");
	data -> pop_back ();
}

std::string& StrBlob::Front () const
{
	Check (0, "Front on empty StrBlob");
	return data -> front ();
}

std::string& StrBlob::Back () const 
{
	Check (0, "Back on empty StrBlob");
	return data -> back ();
}

std::ostream& operator<< (std::ostream &os, const StrBlob &sb)
{
	for (const auto &elem : *sb.data)
		os << elem << " ";

	return os;
}

StrBlobPtr StrBlob::Begin () 
{
	return StrBlobPtr (*this);
}

StrBlobPtr StrBlob::End () 
{
	auto p = StrBlobPtr (*this, Size ());
	return p;
}
