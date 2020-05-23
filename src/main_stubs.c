#include <stdio.h>

#include "main_stubs.h"

typedef struct {
    double      double_;
    int         int_;
    const char* string;
} obj_t;

CAMLprim value new_t(value ml_float, value ml_int, value ml_string) {
    obj_t* o = malloc(sizeof(obj_t));
    if (o == NULL) {
        exit(EXIT_FAILURE);
    }
    o->double_ = Double_val(ml_float);
    o->int_ = Int_val(ml_int);
    o->string = String_val(ml_string);
    return (value)o;
}

CAMLprim value print_t(value ml_ptr) {
    obj_t* o = (obj_t*)ml_ptr;
    printf("double : %g\n"
           "int    : %d\n"
           "char*  : %s\n",
           o->double_,
           o->int_,
           o->string);
    return Val_unit;
}

CAMLprim value free_t(value ml_ptr) {
    free((obj_t*)ml_ptr);
    return Val_unit;
}
