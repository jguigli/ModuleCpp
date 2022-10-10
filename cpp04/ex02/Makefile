SRC_M = AAnimal.cpp \
		Dog.cpp \
		Cat.cpp \
		Brain.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		main.cpp \

HEADER			=	AAnimal.hpp \
					Dog.hpp \
					Cat.hpp \
					Brain.hpp \
					WrongAnimal.hpp \
					WrongCat.hpp \

SOURCES			=	$(SRC_M)

OBJECTS			= 	$(SOURCES:%.cpp=%.o)

NAME			=	polymorphisme

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