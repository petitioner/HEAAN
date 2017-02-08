#ifndef SCHEME_CIPHER_H_
#define SCHEME_CIPHER_H_

#include "../czz/CZZX.h"

using namespace std;
using namespace NTL;

class Cipher {
public:
	CZZX c0;
	CZZX c1;
	long level;

//	ZZ eBnd;
//	ZZ mBnd;
	Cipher(CZZX c0, CZZX c1, long level) : c0(c0), c1(c1), level(level) {}
//	Cipher(CZZX c0, CZZX c1, long level, ZZ eBnd, ZZ mBnd) : c0(c0), c1(c1), level(level), eBnd(eBnd), mBnd(mBnd) {}
};

#endif /* SCHEME_CIPHER_H_ */
