with import <nixpkgs> {};
llvmPackages_9.stdenv.mkDerivation {
    name = "_";
    buildInputs = [
        (with ocaml-ng.ocamlPackages_4_10; [
            ocaml
            ocp-indent
        ])
        shellcheck
    ];
    shellHook = ''
        . .shellhook
    '';
}
