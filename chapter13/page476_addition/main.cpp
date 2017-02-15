#include <utility>

class Y
{

public:
		Y () = default;
		Y (const Y &y) = default;

private:
		int i;
};

class HasY
{

public:
		HasY () = default;
		HasY (HasY &&) = default;
private:
		Y y;
};

int main (int argc, char *argv[])
{
	HasY hy1;
	HasY hy2 = std::move (hy1);

	return 0;
}
