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
inline 
void Swap (HasPtr &hp1, HasPtr &hp2)
{
	using std::swap;
	swap (hp1.ps, hp2.ps);
	swap (hp1.i, hp2.i);
}

