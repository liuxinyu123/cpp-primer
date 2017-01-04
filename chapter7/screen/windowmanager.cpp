#include <string>
#include "windowmanager.h"

void WindowManager::Clear(WindowIndex idx)
{
	Screen &s = screens[idx];
	s.contents = std::string(s.width * s.height, ' ');
}

WindowManager::WindowIndex WindowManager::AddScreen(const Screen &s)
{
	screens.push_back(s);

	return screens.size() - 1;
}
