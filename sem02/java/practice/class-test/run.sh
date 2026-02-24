#!/nix/store/f15k3dpilmiyv6zgpib289rnjykgr1r4-bash-5.3p9/bin/bash

# Compile the Java program
javac main.java

# Check if compilation was successful
if [ $? -eq 0 ]; then
    echo "Compilation successful ✅"
    echo "Running program..."
    echo
    java main
else
    echo
    echo "Compilation failed ❌"
    echo
fi

