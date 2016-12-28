#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> grade(11,0);
	unsigned int score = 0;
	
	cout << "Please input scores: " << endl;
	while(cin >> score)
		grade[score / 10] ++;

	for(auto i : grade)
		cout << i << " " ;
	cout << endl;

	return 0;
}
