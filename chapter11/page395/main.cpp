#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main (int argc, char *argv[])
{
	unordered_map<string, int> word_count;
	word_count.insert ({"hello", 4});
	word_count.insert ({"world", 5});
	word_count.insert (pair<string, int> ("hello", 65));

	cout << word_count.bucket_count () << endl;
	cout << word_count.max_bucket_count() << endl;
	cout << word_count.bucket_size (0) << endl;
	cout << word_count.bucket("hello") << endl;

	return 0;
}
