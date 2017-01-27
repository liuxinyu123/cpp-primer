#include <iostream>
#include <stdexcept>
#include "strblob.h"

using std::make_shared;
using std::vector;

StrBlob::StrBlob () : 
		data (make_shared<vector<std::string>> ())
{
}

StrBlob::StrBlob (std::initializer_list<std::string> il) : 
	   data (make_shared<vector<std::string>> (il))
{
}	

void StrBlob::Check (size_type i, const std::string &msg) const
{
	if (i >= data -> size ())
		throw std::out_of_range::out_of_range (msg);
}

std::string& StrBlob::Front ()
{
	Check (0, "front on empty StrBlob");
	return data -> front ();
}

std::string& StrBlob::Back ()
{
	Check (0, "back on empty StrBlob");
	return data -> back ();
}

void StrBlob::PopBack ()
{
	Check (0, "PopBack on empty StrBlob");
	data -> pop_back ();
}

void StrBlob::Print ()
{
	for (const auto &elem : *data)
		std::cout << elem << " ";
	std::cout << std::endl;
}
