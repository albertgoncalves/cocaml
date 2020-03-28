external print_hello : unit -> unit = "caml_print_hello"

let () : unit =
    print_hello ()
