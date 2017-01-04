#ifndef _WINDOWMANAGER_H_
#define _WINDOWMANAGER_H_

#include <iostream>
#include <vector>
#include "screen.h"

class WindowManager
{
public:
		using WindowIndex = std::vector<Screen>::size_type;
		void Clear(WindowIndex idx);	
		WindowIndex AddScreen(const Screen &s);
		void Display(std::ostream &os, WindowIndex idx) { screens[idx].Display(os);}
private:
		std::vector<Screen> screens{Screen(40,80,' ')};
};

#endif
