#include <memory>
#include <exception>
#include "strblob.h"

StrBlob::StrBlob ()
	:data (std::make_shared<std::vector<std::string>> ()) {}

StrBlob::StrBlob (std::initilaizer_list il)
	:data (std::make_shared<std::vector<std::string>> (il)) {}

void StrBlob::Check (size_type i, std::string &msg) const
{	
	if (i >= Size ())
		throw out_of_range (msg);
}
