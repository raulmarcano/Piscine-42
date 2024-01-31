OBJS = main.o convert.o
RUSH = rush-02
CFLAGS = -Wall -Werror -Wextra 

all: $(RUSH)

rush-02: $(OBJS)
	@cc $(CFLAGS) -o $(RUSH) $(OBJS)
fclean: 
	@rm  $(RUSH) $(OBJS)
