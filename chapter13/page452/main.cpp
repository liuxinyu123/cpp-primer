#include <iostream>
#include <string>

class HasPtr1
{

public:
		HasPtr1 () = default;
		HasPtr1 (const std::string &s = std::string ())
			:ps (new std::string (s)), i (0) {}
		HasPtr1 (const HasPtr1& hp)
			:ps (hp.ps), i (hp.i) {}
		HasPtr1& operator= (const HasPtr1& hp)	
		{
			ps = hp.ps;
			i = hp.i;

			return *this;
		}
		
		std::string& GetString ()
		{
			return *ps;
		}
		
private:
		std::string *ps;
		int i;
};

class HasPtr2
{

public:
		HasPtr2 ()  = default;
		HasPtr2 (const std::string &s = std::string ())
			:ps (new std::string (s)), i (0) {}
		HasPtr2 (const HasPtr2 &hp)
			:ps (new std::string (*hp.ps)), i (hp.i) {}
		HasPtr2& operator= (const HasPtr2& hp) 
		{
			ps = new std::string (*hp.ps);
			i = hp.i;

			return *this;
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
	HasPtr1 hp1 ("hello");
	HasPtr1 hp2 ("world");
	HasPtr1 hp3 = hp1;
	hp1.GetString() = "hhh";

	std::cout << hp1.GetString () << " " << hp2.GetString () << " "
			<< hp3.GetString () << std::endl;

	HasPtr2 hp4 ("hello");
	HasPtr2 hp5 ("world");
	HasPtr2 hp6 = hp4;
	hp4.GetString() = "hhh";

	std::cout << hp4.GetString () << " " << hp5.GetString () << " "
			<< hp6.GetString () << std::endl;

	return 0;

}
