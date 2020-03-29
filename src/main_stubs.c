#include <caml/mlvalues.h>
#include <stdio.h>

#include "main_stubs.h"

typedef struct {
    double      c_float;
    int         c_int;
    const char* c_string;
} obj_t;

CAMLprim value new_t(value ml_float, value ml_int, value ml_string) {
    obj_t* o;
    o           = malloc(sizeof(obj_t));
    o->c_float  = Double_val(ml_float);
    o->c_int    = Int_val(ml_int);
    o->c_string = String_val(ml_string);
    return (value)o;
}

CAMLprim value print_t(value ml_ptr) {
    obj_t* o;
    o = (obj_t*)ml_ptr;
    printf("c_float : %g\nc_int   : %d\nc_string: %s\n", o->c_float, o->c_int,
           o->c_string);
    return Val_unit;
}

CAMLprim value free_t(value ml_ptr) {
    obj_t* o;
    o = (obj_t*)ml_ptr;
    free(o);
    return Val_unit;
}
