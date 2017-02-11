#include <iostream>
#include <string>
#include <new>

class HasPtr
{

public:
		HasPtr (const std::string &s = std::string ())
			:ps (new std::string (s)), i (0), use (new std::size_t (1)) {}
		HasPtr (const HasPtr &hp)
			:ps (hp.ps), i (hp.i), use (hp.use) 
		{
			++*use;
		}	 
		HasPtr& operator= (const HasPtr &hp)
		{
			++*hp.use;

			if (--*use == 0)
			{
				delete ps;
				delete use;
			}

			ps = hp.ps;
			i = hp.i;
			use = hp.use;

			return *this;
		}
		~HasPtr ()
		{
			if (--*use == 0)
			{
				delete ps;
				delete use;
			}
		}

		std::size_t UseCount ()
		{
			return *use;
		}

		std::string& GetString ()
		{
			return *ps;
		}

private:
		std::string *ps;
		int i;
		std::size_t *use;
};

int main (int argc, char *argv[])
{
	HasPtr hp1 ("hello");
	HasPtr hp2 ("world");
	HasPtr hp3 (hp2);

	std::cout << hp1.UseCount () << " " << hp2.UseCount () << " "
		   << hp3.UseCount () << std::endl;
	std::cout << hp1.GetString () << " " << hp2.GetString () << " " 
			<< hp3.GetString () << std::endl;

	hp3 = hp1;
	std::cout << hp1.UseCount () << " " << hp2.UseCount () << " "
		   << hp3.UseCount () << std::endl;
	std::cout << hp1.GetString () << " " << hp2.GetString () << " " 
			<< hp3.GetString () << std::endl;

	return 0;
}
