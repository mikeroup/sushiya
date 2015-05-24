#ifndef _FUGU_
#define _FUGU_

#define CALL(x,...) (*(void*(*)())x)(__VA_ARGS__)

#endif
