#ifndef _SHOYU_
#define _SHOYU_

#include <stdlib.h>

#define SMART(x) x __attribute__ ((__cleanup__(shoyu_clean)))

void shoyu_clean(void*);

#endif
