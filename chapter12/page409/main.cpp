#include <new>

int main (int argc, char *argv[])
{
	int i = 0;
	int *pi = &i;
	//delete i;
	int *pn = nullptr;
	double *pd = new double (1);
	double *pd2 = pd;
	//delete pi;
	delete pn;
	delete pd;
	//delete pd2;
	
	const int *pci = new const int (10);
	delete pci;

	return 0;
}
