#!/bin/sh

# Get the file name from the arguments
file_name=$1

# Get flags all from the arguments
# --clear: clear the screen before running the program
# --infinite: run the program infinitely unless the user stops it
flags=${@:2}

gcc $file_name -lm

if [[ $flags == *"--clear"* ]]; then
    clear
fi

# Check if the program should run infinitely
if [[ $flags == *"--infinite"* ]]; then
    while [ 1 ]
    do
        if [[ $flags == *"--clear"* ]]; then
            clear
        fi
        ./a.out

        # Wait for the user to press enter
        echo ""
        echo ""
        echo ""
        read -p "Program finished. Press enter to run again."
    done
else
    ./a.out
fi

echo ""