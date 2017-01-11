#include <iostream>
#include <list>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
	std::vector<string> authors = {"Milton", "Shakespeare", "Austen"};
	std::list<const char*> articles = {"a", "an", "the"};

	std::vector<string> articles_copy(articles.rbegin(), articles.rend());
	std::vector<string> authors_copy(authors);

	for(const auto &elem : authors_copy)
		cout << elem << " ";
	cout << endl;

	for(const auto &elem : articles_copy)
		cout << elem << " ";
	cout << endl;

	//std::list<int> iList(10, -1);
	//std::vector<string> strVec(6, "hi");

	std::list<int> iList(10);
	std::vector<string> strVec(6);
	for(const auto &elem : iList)
		cout << elem << " " ;
	cout << endl;

	for(const auto &elem : strVec)
		cout << elem << " " ;
	cout << endl;



	return 0;
}
