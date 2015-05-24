#ifndef _EBI_
#define _EBI_

#include <stdint.h>

typedef union {
  double real;
  uint64_t uint;
  int64_t sint;
  uint8_t uchar[8];
} ebi64_t;

typedef union {
  float real;
  uint32_t uint;
  int32_t sint;
  uint8_t uchar[4];
} ebi32_t;

typedef union {
  uint16_t uint;
  int16_t sint;
  uint8_t uchar[2];
} ebi16_t;

typedef struct {
  uint8_t uint;
} ebi8_t;

#endif
