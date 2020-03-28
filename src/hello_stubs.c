#include <caml/mlvalues.h>
#include <stdio.h>

#include "hello_stubs.h"

CAMLprim value caml_print_hello(value unit) {
    printf("Hello\n");
    return Val_unit;
}
