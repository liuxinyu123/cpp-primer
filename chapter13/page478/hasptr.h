#ifndef _HASPTR_H_
#define _HASPTR_H_

#include <string>

class HasPtr
{
public:
		friend void swap (HasPtr &hp1, HasPtr &hp2);
public:
		HasPtr (const std::string &s = std::string (), int val = 0)
			:ps (new std::string (s)), i (val) {}
		HasPtr (const HasPtr &hp);
		HasPtr (HasPtr &&hp) noexcept;
		HasPtr& operator= (HasPtr hp);
		~HasPtr ();
		void Print () const;
private:
		std::string *ps;
		int i;
};

#endif
