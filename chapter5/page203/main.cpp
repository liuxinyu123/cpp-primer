#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

vector<string> Message();

int main()
{

	for(const auto &str : Message())
		cout << str << " ";
	cout << endl;

	return 0;
}

vector<string> Message()
{
	return {"hello", "world", "how", "do", "you", "do"};
}
