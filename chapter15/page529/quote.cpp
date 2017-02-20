#include "quote.h"

Quote::Quote (const std::string &s, double p)
	: book_no (s), price (p) {}

std::string Quote::Isbn () const
{
	return book_no;
}

double Quote::net_price (std::size_t n) const
{
	return price * n;
}
