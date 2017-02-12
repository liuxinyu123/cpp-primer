#include "hasptr.h"

HasPtr :: HasPtr (const HasPtr &hp)
{
	ps = new std::string (*hp.ps);
	i = hp.i;
}

HasPtr& HasPtr :: operator= (HasPtr hp)
{
	using std::swap;
	swap (*this, hp);
	
	return *this;
}

std::string& HasPtr :: GetString () const
{
	return *ps;
}

int HasPtr :: GetInt () const
{
	return i;
}	

