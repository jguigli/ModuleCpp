SRC_M = ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \
		DiamondTrap.cpp \
		main.cpp \

HEADER			=	ClapTrap.hpp \
					ScavTrap.hpp \
					FragTrap.hpp \
					DiamondTrap.hpp \

SOURCES			=	$(SRC_M)

OBJECTS			= 	$(SOURCES:%.cpp=%.o)

NAME			=	diamondtrap

CC				=	c++
RM				=	rm -f

CFLAGS			=	-std=c++98 -Wall -Wextra -Werror

%.o:%.cpp		$(HEADER)
				$(CC) $(CFLAGS) -c $< -o $(<:%.cpp=%.o)

all:			$(NAME)

$(NAME):		$(OBJECTS) $(HEADER)
				$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

clean:
				$(RM) $(OBJECTS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re