#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;


int main()
{
	const string str("0123456789ABCDEF");
	cout << "Please input some numbers between 0 and 15,and divide them using space: " << endl;
	string result;
	unsigned int s = 0;
	while(cin >> s)
		if(s < str.size())
			result += str[s];

	cout << "Your hex numbers is : " << result << endl;

	return 0;
}
