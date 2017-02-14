
int main (int argc, char *argv[])
{
	int i = 43;
	int &r = i;
	//int &&rr = i;
	int &&rr = 23;
	const int &r1 = 23;


	return 0;
}
