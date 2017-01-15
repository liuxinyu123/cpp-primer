#include <iostream>
#include <queue>

using std::cout;
using std::endl;
using std::queue;
using std::priority_queue;

int main (int argc, char *argv[])
{
	queue<int> iQu;

	iQu.push(23);
	iQu.push(231);
	iQu.push(1);
	iQu.push(43);
	iQu.push(53);

	cout << "The front is : " << iQu.front() << endl;
	cout << "The back is : " << iQu.back() << endl;
	iQu.pop();
	cout << "The front is : " << iQu.front() << endl;
	cout << "The back is : " << iQu.back() << endl;

	priority_queue<int> iPQ;
	iPQ.push(234);
	iPQ.push(1);
	iPQ.push(21);
	iPQ.push(13);
	iPQ.push(53);

	cout << "The top is : " << iPQ.top() << endl;
	iPQ.pop();
	cout << "The top is : " << iPQ.top() << endl;



	return 0;
}
