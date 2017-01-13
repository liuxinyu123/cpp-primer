#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
	std::vector<string> strVec;
	strVec.push_back("hello world");

	strVec.front() = "fuck";
	auto &str = strVec.front();
	str = "good";

	cout << strVec.front() << endl;

	//cout << strVec[strVec.size()] << endl;
	//cout << strVec.at(strVec.size()) << endl;

	return 0;
}
