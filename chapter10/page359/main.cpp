#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main (int argc, char *argv[])
{
	cout << "Please input some integers : " << endl;	
	istream_iterator<int> int_it (cin);
	istream_iterator<int> int_eof;
	
	//cout << "The sum of iVec is " << accumulate (int_it, int_eof, 0) << endl;
	vector<int> iVec (int_it , int_eof);

	//while (int_it != int_eof)
		//iVec.push_back (*int_it++);

	cout << "The iVec is: " << endl;
	for (const auto &elem : iVec)
		cout << elem << " ";
	cout << endl;


	return 0;
}
