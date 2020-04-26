with import <nixpkgs> {};
mkShell {
    buildInputs = [
        (with ocaml-ng.ocamlPackages_4_10; [
            ocaml
            ocp-indent
        ])
        clang_10
        shellcheck
    ];
    shellHook = ''
        . .shellhook
    '';
}
