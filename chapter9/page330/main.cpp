#include <iostream>
#include <stack>

using std::cout;
using std::endl;
using std::stack;

int main (int argc, char *argv[])
{
	stack<int> iStk;

	for(int i = 0; i != 10; ++i)
		iStk.push(i);

	while (!iStk.empty())
	{
		cout << iStk.top() << " ";
		iStk.pop();
	}
	cout << endl;

	return 0;
}
