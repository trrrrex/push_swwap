# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I./ft_printf

# Colors for output messages
GREEN = \033[0;32m
RED = \033[0;31m
YELLOW = \033[0;33m
RESET = \033[0m



# Source and object files
SRCS = push_swap.c push_utils.c #move.c stack_act.c
OBJS = $(SRCS:.c=.o)

# Default target: compile and link the executable
NAME = push_swap  # Name of the final executable

# Ensure ft_printf is built and then compile your program
$(NAME): $(OBJS)
	@echo -e "$(GREEN)Building ft_printf library$(RESET)"
	$(MAKE) -C $(FT_PRINTF_DIR)  # Build ft_printf library

	@echo -e "$(YELLOW)All linked, bro: $@$(RESET)"
	$(CC) $(CFLAGS) $(LIB_PATH) -o $@ $(OBJS) $(LIBS)
# Directories and library settings
FT_PRINTF_DIR = ./ft_printf
LIBS = ../push_swwap/ft_printf/libftprintf.a
LIB_PATH = -L$(FT_PRINTF_DIR)

# Compile source files into object files
%.o: %.c
	@echo -e "$(YELLOW)Compiling: $<$(RESET)"
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files and the executable
clean:
	@echo -e "$(GREEN)Cleaning up $(RESET)"
	rm -f $(OBJS) push_swap
	@echo -e "$(YELLOW)Cleaning up ft_printf object files$(RESET)"
	make -C ../push_swwap/ft_printf fclean
rebuild: clean $(NAME)
