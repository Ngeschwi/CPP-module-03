SRCS	=	main.cpp \
			ClapTrap.cpp \
			Scavtrap.hpp

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	claptrap
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -rf

all : $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 

$(OBJS) : ClapTrap.hpp ScavTrap.hpp

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)
