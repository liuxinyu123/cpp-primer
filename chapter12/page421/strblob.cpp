#include <vector>
#include <string>
#include <memory>
#include "strblob.h"

StrBlob::StrBlob ()
		:data (make_shared<std::vector<std::string>> ()) {}

StrBlob::StrBlob (std::initializer_list<std::string> il)
		:data (make_shared<std::vector<std::string> (il)) {}

std::string& Front () const
{
	Check (0, "front on empty StrBlob");
	return data -> front ();
}

void Check (size_type i, const std::string &msg) const
{
	if (i >= data -> size ())
		throw out_of_range (msg);
}

std::string& Back () const
{
	Check (0, "back on empty StrBlob");
	return data -> back ();
}

void StrBlob::Pop_back ()
{
	Check (0, "pop_back on empty StrBlob");
	data -> pop_back ();
}





