#ifndef _HASPTR_H_
#define _HASPTR_H_

#include <string>

class HasPtr
{

public:
		HasPtr (const std::string &s = std::string (), int val = 0);
		HasPtr (const HasPtr &hp);
		HasPtr& operator= (const HasPtr &hp);
		~HasPtr ();
		friend void swap (HasPtr &hp1, HasPtr &hp2);
		std::string& GetString ()
		{
			return *ps;
		}
		int GetInt ()
		{
			return i;
		}

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
