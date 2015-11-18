#ifndef _WASABI_
#define _WASABI_

#define LT -1
#define EQ 0
#define GT 1

#define CMP(a,b) (a > b) - (a < b)

#define SIG(n) CMP(n, 0)

#define IF(n, L1, L2, L3) do {                  \
    switch (SIG(n)) {                           \
    case LT: goto L1;                           \
    case EQ: goto L2;                           \
    case GT: goto L3;                           \
    }                                           \
  } while (0)

#endif
