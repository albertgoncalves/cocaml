type ptr

external new_t : float -> int -> string -> ptr = "new_t"
external print_t : ptr -> unit = "print_t"
external free_t : ptr -> unit = "free_t"

let () : unit =
    let p : ptr = new_t 1.1 2 "Hello, world!" in
    print_t p;
    free_t p
