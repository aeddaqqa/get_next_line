# __get_next_line__

>The aim of this project is to make you code a function that returns a line,
ending with a new[line](#line), read from a file descriptor.  [1337 school (42 network) project](./get_next_line.en.pdf)
## functions allowed
 + read
 + malloc
 + free

### line 
>is a succession of characters that end with ’
\n
’ (ascii code
0x0a
) or with
End Of File.**

## how to compile it

1. git clone https://github.com/aeddaqqa/get_next_line.git
2. make -C ./libft
3. gcc main.c get_next_line.c libft/libft.a -o get_next_line
4. ./get_next_line libft/Makefile