#include <iostream>
#include <string>
#include <new>


class HasPtr
{

public:
		HasPtr (const std::string &s = std::string ())
				:ps (new std::string (s)), i (0)  {}
		HasPtr (const HasPtr& hp) 
				:ps (new std::string (*hp.ps)), i (hp.i) {}
		HasPtr& operator= (const HasPtr& hp)
		{
			ps = new std::string (*hp.ps);
			i = hp.i;

			return *this;
		}
		~HasPtr ()
		{
			delete ps;
		}
private:
		std::string *ps;
		int i;
};

HasPtr f (HasPtr hp);

int main (int argc, char *argv[])
{
	HasPtr p1("hello");
	HasPtr p2 = f (p1);
	//HasPtr p2 (p1);
	f (p1);
	HasPtr p3 (p1);

	return 0;	
}

HasPtr f (HasPtr hp)
{
	HasPtr ret = hp;

	return ret;
}
