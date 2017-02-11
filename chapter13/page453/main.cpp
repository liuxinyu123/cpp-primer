#include <iostream>
#include <string>

class HasPtr//行为像值一样的类
{

public:
		HasPtr (const std::string &s = std::string ())
			:ps (new std::string (s)), i (0) {}
		HasPtr (const HasPtr &hp)
			:ps (new std::string (*hp.ps)), i (hp.i) {}
		HasPtr& operator= (const HasPtr &hp) 
		{
			auto temp = new std::string (*hp.ps);
			delete ps;
			ps = temp;
			i = hp.i;

			return *this;
		}
		~HasPtr () 
		{
			delete ps;
		}

		std::string& GetString () 
		{
			return *ps;
		}

private:
		std::string *ps;
		int i;
};

int main (int argc, char *argv[])
{
	HasPtr hp1 ("hello");
	HasPtr hp2, hp3("world");
	hp2 = hp3;
	hp3.GetString () = "haha";

	std::cout << hp1.GetString () << " " << hp2.GetString () 
			<< " " << hp3.GetString () << std::endl;

	return 0;
}
