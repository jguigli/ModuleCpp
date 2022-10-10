SRC_M = main.cpp \
		Contact.cpp \
		PhoneBook.cpp \

HEADER			=	Contact.hpp \
					PhoneBook.hpp \

SOURCES			=	$(SRC_M)

OBJECTS			= 	$(SOURCES:%.cpp=%.o)

NAME			=	phonebook

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