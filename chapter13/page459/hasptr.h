#ifndef _HASPTR_H_
#define _HASPTR_H_

#include <string>

class HasPtr
{

public:
		HasPtr (const std::string &s = std::string (), int val = 0)
			:ps (new std::string (s)), i (val) {}
		HasPtr (const HasPtr &hp);
		friend void swap (HasPtr &hp1, HasPtr &hp2);
		HasPtr& operator= (HasPtr hp);//参数并不是引用
		std::string& GetString () const;
		int GetInt () const;

private:
		std::string *ps;
		int i;
};

inline 
void swap (HasPtr &hp1, HasPtr &hp2)
{
	using std::swap;
	swap (hp1.ps, hp2.ps);
	swap (hp1.i, hp2.i);
}

#endif
