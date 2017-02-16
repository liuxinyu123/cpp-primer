#include <iostream>
#include "strvec.h"
#include <initializer_list>

int main (int argc, char *argv[])
{
	StrVec sv1;
	sv1.PushBack ("hello");
	sv1.PushBack ("world");
	sv1.PushBack ("what");

	StrVec sv2 = sv1;
	sv2.PopBack ();

	sv1.Print ();
	sv2.Print ();

	StrVec sv3;
   	sv3 = {"what", "are", "you", "doing"};
	sv3.Print ();

	for (int i = 0; i < sv3.Size (); ++i)
		std::cout << sv3[i] << " ";
	std::cout << std::endl;
	
	const StrVec sv4 = sv3;

	//sv4[0] = "how";
	sv3[0] = "what";

	sv3.Print ();
	sv4.Print ();


	return 0;

}
