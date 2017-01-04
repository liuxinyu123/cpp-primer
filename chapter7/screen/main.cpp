#include <iostream>
#include <string>
#include "screen.h"
#include "windowmanager.h"

using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
	Screen s1(20,16,'h');
	s1.Display(cout);
	cout << endl;
	s1.Move(2,4).Set('#').Display(cout);
	cout << endl;

	const Screen s2(43,23,'l');
	s2.Display(cout);
	cout << endl;
	s2.Func();
	
	Screen s3(20,20,'w');
	s3.Display(cout);
	cout << endl;

	WindowManager wm;
	wm.AddScreen(s1);
	wm.AddScreen(s3);
	wm.Clear(0);
	wm.Display(cout, 0);
	cout << endl;	
	wm.Display(cout, 1);
	cout << endl;

	return 0;
	
}
