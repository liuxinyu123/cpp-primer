#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc,char *argv[])
{
	string str;
	
	do{
		cout << "Please input 2 interger numbers: " << endl;
		int v1 = 0, v2 = 0;
		cin >> v1 >> v2;
		cout << v1 << " + " << v2 << " = " << v1 + v2 << endl;
		cout << "Contintue? Enter yes or no? " << endl;
		cin >> str;
	}while(!str.empty() && str[0] != 'n');

	return 0;
}
