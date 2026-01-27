{ pkgs ? import <nixpkgs> {} }:

pkgs.mkShell {
   buildInputs = with pkgs; [
      # Java Development Kit (JDK) - version 21
      jdk21

      # Build tools
      # maven
      # gradle
      
      git
   ];

   shellHook = ''
      echo "Java Development Environment"
      echo "============================"
      java -version
      echo ""
      echo "Available commands:"
      echo "  javac  - Java compiler"
      echo "  java   - Java runtime"
      echo "  jar    - Java archive tool"
      echo ""
      echo "Ready to code! 🚀"
   '';

   # Set JAVA_HOME for tools that need it
   JAVA_HOME = "${pkgs.jdk21}";
}