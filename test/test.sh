norminette libft/
make all clean -C libft/
gcc test.c libft/libft.a -o libft_test
./libft_test
rm -f libft_test