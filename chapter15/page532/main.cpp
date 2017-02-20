#include <iostream>

class Base
{

public: 
		static void Print ()
		{
			std::cout << "hello,world" << std::endl;	
		}
};	

class Derived : public Base
{
public:
		void f (Derived &d)
		{
			Base::Print ();
			Derived::Print ();
			d.Print ();
			Print ();
		}

};

int main (int argc, char *argv[])
{
	Derived d;
	d.f (d);

	return 0;
}
