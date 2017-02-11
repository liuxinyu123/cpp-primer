
class NoDtor
{

public:
		NoDtor () = default;
		~NoDtor () = delete;
};

int main (int argc, char *argv[])
{
	//NoDtor nd1;
	NoDtor *pnd = new NoDtor ();
	//delete pnd;

	return 0;
}
