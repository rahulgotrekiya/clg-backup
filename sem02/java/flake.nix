{
  description = "Java Development Environment with Zsh";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";
  };

  outputs = { self, nixpkgs }:
  let
    system = "x86_64-linux";
    pkgs = import nixpkgs { inherit system; };
  in
  {
    devShells.${system}.default = pkgs.mkShell {

      packages = with pkgs; [
        jdk21
        jdt-language-server
        zsh
      ];

      shell = "${pkgs.zsh}/bin/zsh";

      shellHook = ''
        echo "☕ Java Development Environment Loaded"
        echo "Java Version:"
        java -version
      '';
    };
  };
}
