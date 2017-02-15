#ifndef _HASPTR_H_
#define _HASPTR_H_

#include <string>

class HasPtr
{

public:
		HasPtr (const std::string &s = std::string ())
			:ps (new std::string (s)), i (0) {}
		HasPtr (const HasPtr &hp);
		HasPtr& operator= (const HasPtr &hp);
		~HasPtr ();

private:
		std::string *ps;
		int i;
};

#endif
