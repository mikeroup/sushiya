#include "shoyu.h"

void shoyu_clean(void* ptr) {
  free(*(void**)ptr);
}
