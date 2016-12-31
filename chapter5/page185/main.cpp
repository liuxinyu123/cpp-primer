#include <iostream>

using std::cin;
using std::cout;
using std::endl;

size_t Call_Count();

int main()
{
	for(int i = 0; i < 10; ++i)
		cout << Call_Count() << endl;

	//cout << "Total Call times: " << cnt << endl;

	return 0;
}

size_t Call_Count()
{
	static size_t cnt = 0;
	++cnt;

	return cnt;
}
