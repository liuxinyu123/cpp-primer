#include <iostream>
#include "message.h"
#include "folder.h"

int main (int argc, char *argv[])
{
	Message m1 ("hello");
	Message m2 ("world");

	Folder f1 ("folder1");
	Folder f2 ("folder2");

	f1.Save (m1);
	f1.Save (m2);
	m1.Save (f2);
	m2.Save (f2);

	f1.PrintMessage ();
	f2.PrintMessage ();
	m1.PrintFolder ();
	m2.PrintFolder ();

	Message m3 = m1;
	Message m4 (m2);

	f1.PrintMessage ();
	f2.PrintMessage ();
	m3.PrintFolder ();
	m4.PrintFolder ();
	
	f1.Remove (m2);
	f2.Remove (m1);

	f1.PrintMessage ();
	f2.PrintMessage ();


	return 0;
}
