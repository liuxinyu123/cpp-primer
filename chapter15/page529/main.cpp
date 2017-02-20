#include <iostream>
#include "quote.h"
#include "bulkquote.h"

int main (int argc, char *argv[])
{
	Quote item;
	BulkQuote q;
	Quote *p = &item;
	p = &q;
	Quote &r = q;

	Quote q1 ("123", 21.3);
	std::cout << "ISBN: " << q1.Isbn () << " Price: " << q1.get_price () 
			<< " Total: " << q1.net_price (4) << std::endl;
	BulkQuote bq1 ("234", 23.5, 5, 0.1);
	std::cout << "ISBN: " << bq1.Isbn () << " Price: " << bq1.get_price ()
		   	<< " Total: " << bq1.net_price (5) << std::endl;


	return 0;
}
