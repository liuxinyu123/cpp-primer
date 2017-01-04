#ifndef _WINDOW_MANAGER_H_
#define _WINDOW_MANAGER_H_

#include <vector>
#include "screen.h"

class WindowManager
{
	
private:
		std::vector<Screen> screens{Screen(40,80,' ')};
}
#endif
