FILES = \
	AMateria.cpp \
	Character.cpp \
	Cure.cpp \
	Ice.cpp \
	MateriaSource.cpp \
	main.cpp 

OBJ_DIR = _OUT/

OBJ = $(addprefix $(OBJ_DIR), $(FILES:.cpp=.o))
DEPS = $(OBJ:.o=.d)

DEPFLAGS = -MMD -MF $(@:.o=.d)
CFLAGS = -g -Wall -Wextra -Werror -std=c++98

NAME = Animal

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(OBJ) -o $(NAME)

$(OBJ): $(OBJ_DIR)%.o:%.cpp
	@mkdir -p $(dir $@)
	c++ $(CFLAGS) -c $(@:$(OBJ_DIR)%.o=%.cpp) $(DEPFLAGS) -o $(@)

-include $(DEPS)

clean:
	rm -rf _OUT

fclean: clean
	rm -f $(NAME)

re: fclean all