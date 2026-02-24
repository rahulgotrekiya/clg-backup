{
  description = "Java dev shell";

  inputs.nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";

  outputs = { self, nixpkgs }:
    let
      system = "x86_64-linux";
      pkgs = nixpkgs.legacyPackages.${system};
    in {
      devShells.${system}.default = pkgs.mkShell {
        packages = [
          pkgs.jdk21
        ];

        shellHook = ''
          echo "Java Development Environment"
          echo "============================"
          java -version
          echo "Ready to code! 🚀"
        '';

        JAVA_HOME = pkgs.jdk21;
      };
    };
}

