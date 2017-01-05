#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

using std::vector;
using std::string;

struct PersonInfo
{
	string name;
	vector<string> phones;
};

string Read(std::vector<PersonInfo> &infoVec);

int main(int argc, char *argv[])
{
	std::ifstream in;
	std::cout << "Please input your telephone book: " << std::endl;
	string telBook;
	std::cin >> telBook;
	in.open(telBook);
	if(!in)
	{
		std::cout << "Open failed!" << std::endl;
		return -1;
	}
		
	vector<PersonInfo> persons;
	string line, number;

	while(getline(in, line))
	{
		PersonInfo info;
		std::istringstream stm(line);
		if(stm)
			stm >> info.name;
		while(stm >> number)
			info.phones.push_back(number);
		persons.push_back(info);
	}

	std::cout << "The tele book is: " << std::endl;
	std::cout << Read(persons);

	return 0;
}

string Read(std::vector<PersonInfo> &infoVec)
{
	string str;
	
	for(const auto &info : infoVec)
	{
		str = str + info.name + " ";
		for(const auto &s : info.phones)
			str = str + s + " ";
		str = str + '\n';
	}

	return str;
}
