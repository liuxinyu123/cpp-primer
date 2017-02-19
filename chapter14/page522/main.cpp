#include <iostream>
#include <stdexcept>

class SmallInt 
{
		friend SmallInt operator+ (const SmallInt &s1, const SmallInt &s2);
public:
		SmallInt (int val = 0)
			:i (val) 
		{
			if (val < 0 || val > 255)
				throw std::out_of_range ("Invalid");
		}

		operator int () const
		{
			return i;
		}
private:
		std::size_t i;
};

SmallInt operator+ (const SmallInt &s1, const SmallInt &s2)
{
	return SmallInt (s1.i + s2.i);
}

int main (int argc, char *argv[])
{
	SmallInt s1, s2 (4);
	SmallInt s3 = s1 + s2;
	//int ret = s3 + 4;


	return 0;

}
