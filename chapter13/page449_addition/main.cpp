
class NoCopy
{

public:
		NoCopy () = default;
		NoCopy (const NoCopy&) = delete;
		NoCopy& operator= (const NoCopy&) = delete;
};

int main (int argc, char *argv[])
{
	NoCopy nc1, nc2;
	//NoCopy nc2 = nc1;
	//nc2 = nc1;
	
	return 0;
}
