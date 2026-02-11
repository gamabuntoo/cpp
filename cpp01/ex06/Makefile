NAME = harlFilter
CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror -g3 -Wimplicit-fallthrough
RM = rm -f
SRCS = Harl.cpp main.cpp 
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# $(OBJS): $(SRCS)
# 	$(CC) $(CFLAGS) -c $(OBJS) -o $(SRCS)

clean:
	@$(RM) -r $(OBJS)
	@echo "$(MAGENTA)🧹 Cleaning objects...$(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(GREEN)🗑️ Cleaning objects and executable...$(RESET)"

re: fclean clean all