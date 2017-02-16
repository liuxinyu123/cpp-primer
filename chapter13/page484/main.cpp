#include <iostream>
#include <vector>
#include <algorithm>

class Foo
{

public:
		Foo& RetFoo (Foo &f);
		Foo RetValue (Foo &f);
public:
		Foo ()
			:iVec ({23,12,1,34,53,11,64,221,12,33,23}) {}
		Foo Sort () &&;
		Foo Sort () const &;
		void Print ()
		{
			for (const auto elem : iVec)
				std::cout << elem << " ";
			std::cout << std::endl;
		}
private:
		std::vector<int> iVec;
};

Foo Foo::Sort () &&
{
	sort (iVec.begin (), iVec.end ());
	std::cout << "right value" << std::endl;	

	return *this;	
}

Foo Foo::Sort () const &
{
	Foo ret (*this);
	sort (ret.iVec.begin (), ret.iVec.end ());
	std::cout << "left value" << std::endl;

	return ret;
}

Foo&  RetFoo (Foo &f)
{
	return f;
}

Foo RetValue (Foo &f)
{
	return f;
}

int main (int argc, char* argv[])
{
	Foo	f1;
	RetFoo (f1).Sort ().Print ();
	RetValue (f1).Sort ().Print ();

	return 0;
}
