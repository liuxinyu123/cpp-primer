#include "bulkquote.h"

BulkQuote::BulkQuote (const std::string &s, double p, std::size_t q, double disc)
	:DiscQuote (s, p, q, disc) {}

double BulkQuote::net_price (std::size_t n) const
{
	if (n >= quantity)
		return price * (1 - discount) * n;
	else
		return price * n;
}

//std::ostream& operator<< (std::ostream &os, const BulkQuote &bq)
//{
	//DiscQuote::operator<< (os, bq);
	//
	//return os;	
//}
