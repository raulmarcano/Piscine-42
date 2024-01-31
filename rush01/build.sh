cc -Wall -Werror -Wextra ex00/main.c ex00/parse_input.c ex00/print_result.c ex00/solve.c ex00/check_input.c -o main
./main "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
rm -f main