
class Base 
{

public:
		int mem ()
		{
			return i;
		}
protected:
		int i;
};

class Derived : private Base
{
public:
		using Base::mem;
protected:
		using Base::i;
};

int main (int argc, char *argv[])
{
	Base b;
	Derived d;
	int val = d.mem ();


	return 0;
}
