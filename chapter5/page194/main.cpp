#include <iostream>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;

void print(const char *str);
void print(const int *beg, const int *end);
void print(const int arr[], size_t sz);

int main()
{
	print("hello,world");
	int iarr[] = {23,24,23,12,13,13,13,14,34};
	int len = sizeof(iarr) / sizeof(int);
	print(begin(iarr), end(iarr));
	print(iarr,static_cast<size_t>(len));

	return 0;
}

void print(const char *str)
{
	if(str)
	{
		while(*str)
			cout << *str++ << " ";
		cout << endl;
	}
}

void print(const int *beg, const int *end)
{
	while(beg != end)
	{
		cout << *beg++ << " ";
	}

	cout << endl;
}

void print(const int arr[], size_t sz)
{
	for(size_t i = 0; i < sz; ++i)
		cout << arr[i] << " ";
	cout << endl;
}
