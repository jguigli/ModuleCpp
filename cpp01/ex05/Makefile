SRC_M = main.cpp \
		Harl.cpp \

SRC_B = 


HEADER			=	

SOURCES			=	$(SRC_M)
BONUS_FILES		=	$(SRC_B)

OBJECTS			= 	$(SOURCES:.cpp=.o)

NAME			=	harl

CC				=	c++
RM				=	rm -f

CFLAGS			=	-std=c++98 -Wall -Wextra -Werror 

.c.o:
				$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJECTS) $(HEADER)
				$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

clean:
				$(RM) $(OBJECTS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re