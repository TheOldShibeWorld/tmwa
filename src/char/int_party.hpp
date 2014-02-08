#ifndef INT_PARTY_HPP
#define INT_PARTY_HPP

# include "../strings/fwd.hpp"

class Session;

void inter_party_init(void);
int inter_party_save(void);

int inter_party_parse_frommap(Session *ms);

void inter_party_leave(int party_id, int account_id);

extern AString party_txt;

#endif // INT_PARTY_HPP
