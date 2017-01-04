#include "screen.h"

Screen& Screen::Move(pos r, pos c)//函数定义处声明为内联
{
	pos row = r * width;
	cursor = row + c;

	return *this;
}


void Screen::Func() const
{
	++access_cnt;
}

Screen& Screen::Set(char ch)
{
	contents[cursor] = ch;

	return *this;
}

Screen& Screen::Set(pos r, pos c, char ch)
{
	pos row = r * width;
	contents[row + c] = ch;

	return *this;
}

Screen& Screen::Display(std::ostream &os)
{
	DoDisplay(os);

	return *this;
}

const Screen& Screen::Display(std::ostream &os) const
{
	DoDisplay(os);

	return *this;
}

