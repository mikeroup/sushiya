#ifndef _UNAGI_
#define _UNAGI_

#define HOT(x) __builtin_expect(x,1)
#define COLD(x) __builtin_expect(x,0)

#endif
