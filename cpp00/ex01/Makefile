NAME = phonebook
CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror -g3
RM = rm -f
SRCS = main.cpp phonebook.cpp contact.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) -r $(OBJS)
	@echo "$(MAGENTA)🧹 Cleaning objects...$(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(GREEN)🗑️ Cleaning objects and executable...$(RESET)"

re: fclean clean all