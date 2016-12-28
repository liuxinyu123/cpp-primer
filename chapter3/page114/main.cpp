#include <iostream>
#include <iterator>

using std::endl;
using std::cout;

int main()
{
	constexpr int row = 4, col = 4;
	int arr[row][col] = {};

	for(int i = 0; i < row; ++i)
	{
		for(int j = 0; j < col; ++j)
		{
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}

	for(int i = 0; i < row; ++i)
	{
		for(int j = 0; j < col; ++j)
		{
			arr[i][j] = i * col + j;
		}
	}

	for(int i = 0; i < row; ++i)
	{
		for(int j = 0; j < col; ++j)
		{
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}

	int base = 10;
	for(auto &r : arr)
	{
		for(auto &c : r)
		{
			c = base;
			++base;
		}
	}

	for(const auto &r : arr)
	{
		for(auto c : r)
			cout << c << "  ";
		cout << endl;
	}

	cout << endl;

	for(auto p = arr; p != arr + row; ++p)
	{
		for(auto q = *p; q != *p + col; ++q)
			cout << *q << "  ";
		cout << endl;
	}

	cout << endl;

	for(auto p = std::begin(arr); p != std::end(arr); ++p)
	{
		for(auto q = std::begin(*p); q != std::end(*p); ++q)
			cout << *q << "  ";
		cout << endl;
	}

	return 0;
}
