#include <iostream>
#include "hasptr.h"

HasPtr::HasPtr (const std::string &s, int val)
	:ps (new std::string (s)), i (val) {}

HasPtr::HasPtr (const HasPtr &hp)
{
	ps = new std::string (*hp.ps);
	i = hp.i;
}

HasPtr& HasPtr::operator= (const HasPtr &hp)
{
	auto temp = new std::string (*hp.ps);
	delete ps;
	ps = temp;
	i = hp.i;

	return *this;
}

HasPtr::~HasPtr ()
{
	delete ps;
}


