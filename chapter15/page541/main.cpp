#include <iostream>
#include "quote.h"
#include "discquote.h"
#include "bulkquote.h"

int main (int argc, char *argv[])
{
	Quote q;
	//DiscQuote dq;
	BulkQuote bq1 ("123", 12, 10, 0.1);
	std::cout << bq1.net_price (10) << std::endl;

	return 0;
}
