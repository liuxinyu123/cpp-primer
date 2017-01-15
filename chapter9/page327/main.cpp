#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main (int argc, char *argv[])
{
	int i = 4;
	string s = std::to_string (i);

	cout << s << endl;
	
	//s.append("hh");
	double d = stod (s);
	cout << d << endl;

	string str = "pi = 3.14il";
	double d1 = stod(str.substr(str.find_first_of("+-.0123456789")));
	//double d1 = stod(str, static_cast<size_t>(str.find_first_of("+-.0123456789")));
	cout << d1 << endl;
	

	return 0;

}
