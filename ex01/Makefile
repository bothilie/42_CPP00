SRC= annuaire.cpp
NAME = annuaire

all: $(NAME)

$(NAME): 
	clang++ -Wall -Wextra -Werror $(SRC) -o $(NAME)
	@echo "Done."

clean:
	@echo "Cleaning object files..."
	@echo "Done."

fclean: clean
	@echo "Cleaning Library..."
	@$(RM) $(NAME)
	@echo "Done."

re: fclean all
