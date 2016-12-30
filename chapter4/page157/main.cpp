#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(int argc,char *argv[])
{
	vector<string> grade = {"E","D","C","B","A","A++"};

	unsigned score = 0;
	while(cin >> score)
	{
		if(score < 60)
			cout << grade[0] << endl;
		else
		{
			string str = grade[(score - 50) / 10];
			if(score != 100)
			{
				if(score % 10 <= 2)
					str += "-";
				if(score % 10 >= 7 && score % 10 <= 9)
					str += "+";
			}
			cout << str << endl;
		}
	}

	return 0;
}
