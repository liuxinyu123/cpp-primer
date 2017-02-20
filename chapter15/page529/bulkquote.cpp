#include "quote.h"
#include "bulkquote.h"

double BulkQuote::net_price (std::size_t n) const 
{
	if (n >= min_qty)
		return n * (1 - discount) * price;
	else
		return n * price;
}


