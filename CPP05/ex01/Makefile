NAME            = exercise01
SOURCES         = main.cpp Bureaucrat.cpp Form.cpp
OBJECTS         = $(SOURCES:.cpp=.o)

CXX              = c++
CXXFLAGS          = -Wall -Wextra -Werror -std=c++98
RM              = rm -rf

GREEN           = \033[1;32m
RED             = \033[1;31m
YELLOW          = \033[1;33m
CYAN            = \033[1;36m
RESET           = \033[0m


all: $(NAME)

$(NAME): $(OBJECTS)
	@echo "$(CYAN)Building $(NAME)...$(RESET)"
	@$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(NAME) >/dev/null 2>&1
	@echo "$(GREEN)$(NAME) built successfully!$(RESET)"

%.o: %.cpp
	@echo "$(YELLOW)Compiling $<...$(RESET)"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "$(RED)Cleaning object files...$(RESET)"
	@$(RM) $(OBJECTS) >/dev/null 2>&1

fclean: clean
	@echo "$(RED)Removing $(NAME)...$(RESET)"
	@$(RM) $(NAME) >/dev/null 2>&1

re: fclean all

.PHONY: all clean fclean re