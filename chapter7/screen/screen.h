#ifndef _SCREEN_H_
#define _SCREEN_H_

#include <iostream>
#include <string>

class Screen
{
public:
		using pos = std::string::size_type;
		Screen() = default;
		Screen(pos w, pos h, char c = ' ')
				:width(w), height(h), contents(w * h, c) {}
		char Get() const {return contents[cursor];}
		inline char Get(pos r, pos c) const;//显式声明为内联
		Screen& Move(pos r, pos c);
		void Func() const;//test mutable
		Screen& Set(char ch);
		Screen& Set(pos r, pos c, char ch);
		const Screen& Display(std::ostream &os) const;
		Screen& Display(std::ostream &os);
private:
		mutable size_t access_cnt;//调用次数 可变数据成员
		void DoDisplay(std::ostream &os) const { os << contents;}
private:
		pos cursor = 0;
		pos width = 0;
		pos height = 0;
		std::string contents;
};

char Screen::Get(pos r, pos c) const
{
	pos row = r * width;
	
	return contents[row + c];
}

#endif
