
class PrivateCopy
{
	
public:
		PrivateCopy () = default;
		~PrivateCopy () = default;

private:
		PrivateCopy (const PrivateCopy&);
		PrivateCopy& operator= (const PrivateCopy&);
};

int main (int argc, char *argv[])
{
	PrivateCopy pc1, pc2;
	//pc2 = pc1;
	//privateCopy pc3 = pc2;

	return 0;
}
