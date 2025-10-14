
NAME            = megaphone

SOURCES         = megaphone.cpp
OBJECTS         = $(SOURCES:.cpp=.o)

CC              = c++
CFLAGS          = -Wall -Wextra -Werror -std=c++98
RM              = rm -rf

GREEN           = \033[1;32m
RED             = \033[1;31m
YELLOW          = \033[1;33m
BLUE            = \033[1;34m
CYAN            = \033[1;36m
RESET           = \033[0m
PURPLE          = \033[1;35m

all: banner $(NAME)

$(NAME): $(OBJECTS)
	@echo "$(CYAN)Building $(NAME)...$(RESET)"
	@$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME) >/dev/null 2>&1
	@echo "$(GREEN)$(NAME) built successfully!$(RESET)"

%.o: %.cpp
	@echo "$(YELLOW)Compiling $<...$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "$(RED)Cleaning object files...$(RESET)"
	@$(RM) $(OBJECTS) >/dev/null 2>&1

fclean: clean
	@echo "$(RED)Removing $(NAME)...$(RESET)"
	@$(RM) $(NAME) >/dev/null 2>&1

re: fclean all

.PHONY: all clean fclean re banner

banner:
	@echo ""
	@echo "$(GREEN)                                                 +###                                               $(RESET)"
	@echo "$(GREEN)                                                 ####                                               $(RESET)"
	@echo "$(GREEN)                                                ## ###                                              $(RESET)"
	@echo "$(GREEN)                                                ##  ##+                                             $(RESET)"
	@echo "$(GREEN)                                               ###   ##                                             $(RESET)"
	@echo "$(GREEN)                                               ##    ##                                             $(RESET)"
	@echo "$(GREEN)                                              +##     ##                                            $(RESET)"
	@echo "$(GREEN)                                              ##     +###                                           $(RESET)"
	@echo "$(GREEN)                                              ##       ##                                           $(RESET)"
	@echo "$(GREEN)                                             ##++     ###                                           $(RESET)"
	@echo "$(GREEN)                                            +#-       ++##                                          $(RESET)"
	@echo "$(GREEN)                                            ##          ##                                          $(RESET)"
	@echo "$(GREEN)                                           ###           ##                                         $(RESET)"
	@echo "$(GREEN)                                           ##        ##  ###                                        $(RESET)"
	@echo "$(GREEN)                                          ####            ##                                        $(RESET)"
	@echo "$(GREEN)                                          ##              ###                                       $(RESET)"
	@echo "$(GREEN)                                         ###               ##                                       $(RESET)"
	@echo "$(GREEN)                                         ##                ##                                       $(RESET)"
	@echo "$(GREEN)                                        ###..............   ##                                      $(RESET)"
	@echo "$(GREEN)                                        #+..................###                                     $(RESET)"
	@echo "$(GREEN)                                       ##................... ##                                     $(RESET)"
	@echo "$(GREEN)                                       #+...................  ##                                    $(RESET)"
	@echo "$(GREEN)                                       ###-+#-.--.+###-.-#-+#####                                   $(RESET)"
	@echo "$(GREEN)                                      ####++#--.-++-+++-.+-++##+#                                   $(RESET)"
	@echo "$(GREEN)                                      ##+####-.-++####+-.#.-+-.-+.                                  $(RESET)"
	@echo "$(GREEN)                                     ###-.--+--...++.....+.----#+..                                 $(RESET)"
	@echo "$(GREEN)                                     ###+++++-+-++++----+-...#+.+...                                $(RESET)"
	@echo "$(GREEN)                                     #-.....+##-.....-+#+....+-+#....                               $(RESET)"
	@echo "$(GREEN)                                    #+.....+####-............++--#+.                                $(RESET)"
	@echo "$(GREEN)                                   ###..-...-++-...-++--....-++...-#+                               $(RESET)"
	@echo "$(GREEN)                                   ##+.....................--+-....-#                               $(RESET)"
	@echo "$(GREEN)                                   ##+-....................+.#-+....-#                              $(RESET)"
	@echo "$(GREEN)                                  ##-#-....................++#-#.....-#                             $(RESET)"
	@echo "$(GREEN)                                  #+.++....................-+#-+-.....+#                            $(RESET)"
	@echo "$(GREEN)                                 ##+ ##.....................+#.+-.....+#                            $(RESET)"
	@echo "$(GREEN)                                 ######+...............-+---##.-+++-..-#                            $(RESET)"
	@echo "$(GREEN)                                 #+.+++#-.....-.........--+##-.-+.....-##                           $(RESET)"
	@echo "$(GREEN)                                 #-.-+.#+..........--..-#+##+...#......##                           $(RESET)"
	@echo "$(GREEN)                                 #-.-+.-#+--.......-+.+####-....+-.....+#                           $(RESET)"
	@echo "$(GREEN)                                 #-.-+..-##+++-....-#+####-.....-+.....##                           $(RESET)"
	@echo "$(GREEN)                                 #+-++....++###########+-.......-########                           $(RESET)"
	@echo "$(GREEN)                                 ##-++.-........-----............#.----#                            $(RESET)"
	@echo "$(GREEN)                                 ##+-+...........................#---.##                            $(RESET)"
	@echo "$(GREEN)                                  ####...........................-#-+-##                            $(RESET)"
	@echo "$(GREEN)                                   ###---...............-.....----+###                              $(RESET)"
	@echo "$(GREEN)                                    ############+++++++############                                  $(RESET)"
	@echo "$(GREEN)                                      ......+######+..+###+#+##.                                     $(RESET)"
	@echo "$(GREEN)                                        ....+++--+-+..-#+++++##                                      $(RESET)"
	@echo "$(GREEN)                                        ....+#+++-#+-.-##+#+++#                                      $(RESET)"
	@echo "$(GREEN)                                        ######++++-+-++++++##+#                                      $(RESET)"
	@echo "$(GREEN)                                       #------++##-#+........###                                     $(RESET)"
	@echo "$(GREEN)                                       #+-.....+#+##-......-.+##                                     $(RESET)"
	@echo "$(GREEN)                                       ###############+--+#####                                      $(RESET)"
	@echo ""
	@echo "$(GREEN)                         💚 Compiling C++ Module 00 — Exercise 00: MEGAPHONE 💚						$(RESET)"