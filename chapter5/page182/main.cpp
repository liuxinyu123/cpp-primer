#include <iostream>

using std::cin;
using std::cout;
using std::endl;

unsigned long long Factor(int n);
unsigned long long Factor1(int n);

int main()
{
	for(int i = 0; i < 10; ++i)
	{
		cout << i << "! = " << Factor(i) << endl;
		cout << i << "! = " << Factor1(i) << endl;
	}
	
	cout << "8!= " << Factor(8.4) << endl;
	int a; 
	double d;
	cout << a << " " << d << endl;
	
	return 0;
}

unsigned long long Factor(int n)
		
{
	if(!n)
		return 1;
	else
		return n * Factor(n - 1);
}

unsigned long long Factor1(int n)
{
	int ret = 1;
	while(n > 1)
		ret *= n--;

	return ret;
}
