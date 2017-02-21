
class Base
{

public:
		int pub_mem;
private:
		int pri_mem;
protected:
		int pro_mem;
};

class Pub_Derive : public Base
{
public:
		int f1 () 
		{
			return pro_mem;
		}

		int f2 () 
		{
			return pri_mem;
		}
};

class Pri_Derive : private Base
{

public:
		int f1 ()
		{
			return pro_mem;
		}
};
int main (int argc, char *argv[])
{
	
}
