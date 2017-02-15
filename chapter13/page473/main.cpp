#include <iostream>
#include <string>
#include "strvec.h"

int main (int argc, char *argv[])
{
	StrVec sv1;
	std::cout << sv1.Size () << " " << sv1.Capacity () << std::endl;
	sv1.PushBack ("hello");

	std::cout << sv1.Size () << " " << sv1.Capacity () << std::endl;
	sv1.Print ();
	sv1.PushBack ("world");
	sv1.PushBack ("how");
	sv1.PushBack ("what");
	sv1.PushBack ("hh");
	sv1.PushBack ("hhhh");

	StrVec sv2 = sv1;
	std::cout << sv1.Size () << " " << sv1.Capacity () << std::endl;
	sv1.Print ();

	sv2.PopBack ();
	sv2.PopBack ();
	std::cout << sv2.Size () << " " << sv2.Capacity () << std::endl;
	sv2.Print ();

	return 0;	
}
