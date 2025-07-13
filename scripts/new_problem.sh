#!/bin/bash

if [ $# -lt 2 ]; then
    echo "Usage: $0 <contest_type> <problem_name>"
    echo "Example: $0 abc 350-a"
    echo "         $0 arc 170-b"
    exit 1
fi

CONTEST_TYPE=$1
PROBLEM_NAME=$2
CONTEST_DIR="/Users/horiikengo/Documents/cpp/atcoder/$CONTEST_TYPE"
PROBLEM_DIR="$CONTEST_DIR/$PROBLEM_NAME"

if [ ! -d "$CONTEST_DIR" ]; then
    echo "Error: Contest type '$CONTEST_TYPE' does not exist."
    echo "Available types: abc, arc, agc, others"
    exit 1
fi

if [ -d "$PROBLEM_DIR" ]; then
    echo "Problem directory '$PROBLEM_NAME' already exists in $CONTEST_TYPE"
    echo "Opening existing directory..."
else
    echo "Creating new problem directory: $CONTEST_TYPE/$PROBLEM_NAME"
    mkdir -p "$PROBLEM_DIR"
    
    # Copy template and Makefile
    cp "/Users/horiikengo/Documents/cpp/atcoder/template/template.cpp" "$PROBLEM_DIR/main.cpp"
    cp "/Users/horiikengo/Documents/cpp/atcoder/Makefile" "$PROBLEM_DIR/"
    
    # Create input file
    touch "$PROBLEM_DIR/input.txt"
    
    echo "Files created:"
    echo "  - main.cpp (from template)"
    echo "  - Makefile"
    echo "  - input.txt"
fi

echo "Problem directory: $PROBLEM_DIR"
echo ""
echo "To work on this problem:"
echo "  cd $PROBLEM_DIR"
echo "  # Edit main.cpp and input.txt"
echo "  make run"