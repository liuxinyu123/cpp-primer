#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int grade[11] = {};

	for(int i : grade)
		cout << i << " " ;
	cout << endl;

	unsigned int score = 0;
	cout << "Please input scores between 0 and 100 dividend by space " << endl;

	while(cin >> score)
		if(score <= 100)
			++grade[score / 10];
	int *e = &grade[11];

	for(int *p = grade; p != e; ++p)
		cout << *p << " " ;
	cout << endl;

	return 0;
}
