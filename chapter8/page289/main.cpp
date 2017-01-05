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

bool IsValid(const string &tele);//简单的判断是否有效 11位
string Format(const string &tele);//简单的格式一下 +086

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

	for(const auto &entry : persons)
	{
		std::ostringstream badNums, formatNums;
		for(const auto &num : entry.phones)
		{
			if(IsValid(num))
				formatNums << " " << num;
			else
				badNums << " " << num;
		}

		if(badNums.str().empty())
			std::cout << entry.name << " : " << formatNums.str() << std::endl;
		else
			std::cerr << "Error : " << entry.name << " invalid numbers: " << badNums.str() << std::endl;

	}


	return 0;
}

bool IsValid(const string &tele)
{
	return tele.size() == 11;
}

string Format(const string &tele)
{
	string str(tele);
	str = "086" + str;

	return str;
}
