{ pkgs ? import <nixpkgs> {} }:

pkgs.mkShell {
   buildInputs = with pkgs; [
      # Python 3.12 (latest stable version)
      python312
      
      # Python package manager
      python312Packages.pip

      python312Packages.ipython  # Better interactive Python shell

      git
   ];

   # Environment variables and welcome message
   shellHook = ''
      echo "🐍 Python Development Environment"
      echo "================================="
      python --version
      echo ""
      echo "Available commands:"
      echo "  python      - Run Python scripts or start interactive mode"
      echo "  python3     - Same as python"
      echo "  ipython     - Enhanced interactive Python shell"
      echo "  pip         - Install Python packages"
      echo ""
      echo "Try: python --version"
      echo "Or:  python your_script.py"
      echo ""
      echo "Ready to code! 🚀"
   '';
}