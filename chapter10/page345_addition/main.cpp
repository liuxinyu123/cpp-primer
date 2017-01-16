#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool IsShorter (const string &str1, const string &str2);

int main (int argc, char *argv[])
{
	vector<string> strVec;
	strVec.push_back("the");
	strVec.push_back("quick");
	strVec.push_back("red");
	strVec.push_back("fox");
	strVec.push_back("jumps");
	strVec.push_back("over");
	strVec.push_back("the");
	strVec.push_back("slow");
	strVec.push_back("red");
	strVec.push_back("turtle");

	cout << "The strVec is : " << endl;
	for (const auto &elem : strVec)
		cout << elem << " ";
	cout << endl;

	sort (strVec.begin (), strVec.end ());
	cout << "After sort,the strVec is : " << endl;
	for (const auto &elem : strVec)
		cout << elem << " ";
	cout << endl;

	auto pos = unique (strVec.begin (), strVec.end ());
	cout << "After unique,the strVec is : " << endl;
	for (const auto &elem : strVec)
		cout << elem << " ";
	cout << endl;

	strVec.erase (pos, strVec.end ());
	cout << "After erase,the strVec is : " << endl;
	for (const auto &elem : strVec)
		cout << elem << " ";
	cout << endl;
	
	stable_sort (strVec.begin (), strVec.end (), IsShorter);
	cout << "After stable sort,the strVec is : " << endl;
	for (const auto &elem : strVec)
		cout << elem << " ";
	cout << endl;

	return 0;

}

bool IsShorter (const string &str1, const string &str2)
{
	return str1.size () < str2.size ();
}
