#ifndef _WASABI_
#define _WASABI_

#define LT -1
#define EQ 0
#define GT 1

#define CMP(a,b) ((a > b) - (a < b))

#define SIG(n) CMP(n, 0)

#define IF(n, l1, l2, l3) do {                  \
    switch (SIG(n)) {                           \
    case LT: goto l1;                           \
    case EQ: goto l2;                           \
    case GT: goto l3;                           \
    }                                           \
  } while (0)

#endif
