#include "discquote.h"

DiscQuote::DiscQuote (const std::string &s, double p, std::size_t q, double disc)
		:Quote (s, p), quantity (q), discount (disc) {}



