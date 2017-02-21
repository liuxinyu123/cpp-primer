#include <iostream>

using std::cout;
using std::endl;

class Base 
{
public:
		virtual void f1 ()
		{
			cout << "in Base" << endl;
		}

};

class D1 : public Base
{

public:
		void f1 (int i) 
		{
			cout << "in D1" << endl;
		}
		virtual void f2 ()
		{
			cout << "in D1" << endl;
		}
};

class D2 : public D1
{

public:
		void f1 (int i) 
		{
			cout << "in D2" << endl;
		}
		void f1 () 
		{
			cout << "in D2" << endl;
		}
		void f2 ()
		{
			cout << "in D2" << endl;
		}
};

int main (int argc, char *argv[])
{
	Base b;
	D1 d1;
	D2 d2;

	Base *pb1 = &b, *pb2 = &d1, *pb3 = &d2;

	pb1 -> f1 ();
	pb2 -> f1 ();
	pb3 -> f1 ();

	D1 *pdd1 = &d1, *pdd2 = &d2;
	//pb2 -> f2 ();	
	pdd1 -> f2 ();
	pdd2 -> f2 ();

	Base *pddd1 = &d2;
	D1 *pddd2 = &d2;
	D2 *pddd3 = &d2;

	//pddd1 -> f1 (2);
	pddd2 -> f1 (2);
	pddd3 -> f1 (2);

	return 0;
}
