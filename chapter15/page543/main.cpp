
class Base
{

protected:
		int prot_mem; 
};

class Derived : public Base
{

//friend void f1 (Base &b);
friend void f2 (Derived &d);

private:
		int i;

};

//void f1 (Base &b)
//{
	//b.prot_mem = 0;
//}

void f2 (Derived &d)
{
	d.i = d.prot_mem = 0;
}

int main (int argc, char *argv[])
{
	Base b;
	Derived d;
	
	//f1 (b);
	f2 (d);

	return 0;	
}
