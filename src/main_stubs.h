#ifndef __MAIN_STUBS_H__
#define __MAIN_STUBS_H__

#include <caml/mlvalues.h>

CAMLprim value new_t(value, value, value);
CAMLprim value print_t(value);
CAMLprim value free_t(value);

#endif
