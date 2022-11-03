
# Get the file name from the arguments
file_name=$1

# gcc file_name.c && ./a.out
gcc $file_name && ./a.out
echo ""