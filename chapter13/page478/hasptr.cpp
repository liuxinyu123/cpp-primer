#include "hasptr.h"

HasPtr::HasPtr (const HasPtr &hp)
	:ps (new std::string (*hp.ps)), i (hp.i) {}

HasPtr& HasPtr::operator= (const HasPtr &hp)
{
	auto p = new std::string (*hp.ps);
	delete ps;
	ps = p;
	i = hp.i;

	return *this;
}

HasPtr::~HasPtr ()
{
	delete ps;
}


