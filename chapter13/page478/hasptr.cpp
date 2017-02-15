#include <iostream>
#include "hasptr.h"

HasPtr::HasPtr (const HasPtr &hp)
	:ps (new std::string (*hp.ps)), i (hp.i) {}

HasPtr::HasPtr (HasPtr &&hp) noexcept
	:ps (hp.ps), i (hp.i) 
{
	hp.ps = nullptr;
}

HasPtr& HasPtr::operator= (HasPtr hp)
{
	swap (*this, hp);

	return *this;
}

HasPtr::~HasPtr ()
{
	delete ps;
}

void swap (HasPtr &hp1, HasPtr &hp2)
{
	using std::swap;
	swap (hp1.ps, hp2.ps);
	swap (hp1.i, hp2.i);
}

void HasPtr::Print () const
{
	std::cout << *ps << " " << i << std::endl;
}


