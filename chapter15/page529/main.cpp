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

	return 0;
}
