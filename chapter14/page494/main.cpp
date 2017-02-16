#include <iostream>
#include <string>

class HasPtr
{

public:
		friend std::ostream& operator<< (std::ostream &os, const HasPtr &hp);
		friend std::istream& operator>> (std::istream &is, HasPtr &hp);
		friend HasPtr operator+ (const HasPtr &hp1, const HasPtr &hp2);
public:
		HasPtr (const std::string &s = std::string (), int val = 0)
			:ps (new std::string (s)), i (val) {}
		HasPtr (const HasPtr &hp)
			:ps (new std::string (*hp.ps)), i (hp.i) {}
		HasPtr& operator= (const HasPtr &hp)
		{
			auto p = new std::string (*hp.ps);
			delete ps;
			ps = p;
			i = hp.i;

			return *this;
		}
		HasPtr& operator+= (const HasPtr &hp);
private:
		std::string *ps;
		int i;
};

std::ostream& operator<< (std::ostream &os, const HasPtr &hp)
{
	os << *hp.ps << " " << hp.i;

	return os;
}

std::istream& operator>> (std::istream &is, HasPtr &hp)
{
	is >> *hp.ps >> hp.i;
	
	if (!is)
		hp = HasPtr ();

	return is;
}

HasPtr& HasPtr:: operator+= (const HasPtr &hp)
{
	ps = new std::string (*ps + *hp.ps);
	i += hp.i;

	return *this;	
}

HasPtr operator+ (const HasPtr &hp1, const HasPtr &hp2)
{
	HasPtr ret (hp1);
	ret += hp2;

	return ret;
}

int main (int argc, char *argv[])
{
	HasPtr hp1 ("hello", 42);
	HasPtr hp2 ("world", 22);
	std::cout << hp1 << std::endl;
	std::cout << hp2 << std::endl;
	HasPtr hp3 = hp1 + hp2;

	std::cout << hp3 << std::endl;

	std::cin >> hp2;
	std::cout << hp2 << std::endl;


	return 0;
}
