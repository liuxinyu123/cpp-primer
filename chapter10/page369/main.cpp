#include <iostream>
#include <list>
#include <forward_list>

using namespace std;

void Print (list<int> l);

int main (int argc, char *argv[])
{
	list<int> iList1, iList2;

	for (int i = 0; i < 10; ++i)
	{
		iList1.push_back (2 * i);
		iList2.push_back (2 * i + 1);
	}

	cout << "The iList1 is : " << endl;
	Print (iList1);
	cout << "The iList2 is : " << endl;
	Print (iList2);
	
	iList1.merge (iList2);
	//iList1.merge (iList2, [] (const int a, const int b)
					//{ return a >= b; });
	cout << "After merge: " << endl;
	cout << "The iList1 is : " << endl;
	Print (iList1);
	cout << "The iList2 is : " << endl;
	Print (iList2);

	iList1.remove (10);
	cout << "After remove, iList1 is : " << endl;
	Print (iList1);

	iList1.remove_if ([] (const int i) 
					{ return (i >= 1 && i <= 5); });
	cout << "After remove if, iList1 is : " << endl;
	Print (iList1);
	
	iList1.reverse ();
	cout << "After reverse, iList1 is : " << endl;
	Print (iList1);

	iList1.sort ();
	cout << "After sort, iList1 is : " << endl;
	Print (iList1);

	iList1.sort ([] (const int a, const int b)
					{ return a >= b;});
	cout << "After sort, iList1 is : " << endl;
	Print (iList1);

	return 0;
	
}

void Print (list<int> l)
{
	for (const auto &elem : l)
		cout << elem << " ";
	cout << endl;
}
