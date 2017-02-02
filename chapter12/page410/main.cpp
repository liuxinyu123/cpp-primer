#include <iostream>
#include <new>
#include <string>

using namespace std;

string* Factory (const char *pc);
void UseFactory ();

int main (int argc, char *argv[])
{
	while (1)
		UseFactory ();

	return 0;
}

string* Factory (const char *pc)
{
	return new string (pc);
}

void UseFactory ()
{
	string *ps = Factory ("hello");
	delete ps;
}
