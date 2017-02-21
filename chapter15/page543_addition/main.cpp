
class Base
{

public:
		int pub_mem ();
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

class Derive_from_Pub : public Pub_Derive
{

public:
		int f1 ()
		{
			return pro_mem;
		}
};

class Derive_from_Pri : public Pri_Derive
{
public:
		int f1 ()
		{
			return pro_mem;
		}
};

int main (int argc, char *argv[])
{
	Pub_Derive d1;
	Pri_Derive d2;
	
	d1.pub_mem ();
	//d2.pub_mem ();

	return 0;	
}
