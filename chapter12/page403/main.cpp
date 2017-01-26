#include <iostream>
#include <memory>
#include <string>

using namespace std;

shared_ptr<string> Factory (string &s);
void UseFactory (string &s);
shared_ptr<string> UseFactory (string &s);

int main (int argc, char *argv[])
{
	string str = "hello";
	UseFactory (str);
	
	
	return 0;

}

shared_ptr<string> Factory (string &s)
{
	return make_shared<string> (s);
}

void UseFactory (string &s)
{
	shared_ptr<string> p = make_shared<string> (s);
}

shared_ptr<string> UseFactory (string &s)
{
	
}
