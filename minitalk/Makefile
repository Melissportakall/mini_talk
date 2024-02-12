NAME = minitalk
SERVER = server.c
SERVER_BONUS = server_bonus.c
SERVER_NAME = server
CLIENT = client.c
CLIENT_BONUS = client_bonus.c
CLIENT_NAME = client
UTILS = utils.c
UTILS_BONUS = utils_bonus.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror
BOLD_PURPLE	=	\033[1;35m
BOLD_CYAN	=	\033[1;36m
BOLD_YELLOW	=	\033[1;33m
BOLD_GREEN  =	\033[0;32m
NO_COLOR	=	\033[0m

all: $(NAME)

$(NAME): intro server client kaanend
bonus: intro server_bonus client_bonus kaanend
intro:
	@echo "🚧 $(BOLD_YELLOW)Make: $(NO_COLOR)Starting the compilation..."
kaanend:
	@echo "🚧 $(BOLD_YELLOW)Make: $(NO_COLOR)Compilation $(BOLD_GREEN)succesfully $(NO_COLOR)finished!\n"
server:
	@$(CC) $(SERVER) $(UTILS) -o $(SERVER_NAME) $(CFLAGS)
	@echo "📥 Server $(BOLD_GREEN)ready$(NO_COLOR)!"
server_bonus:
	@$(CC) $(SERVER_BONUS) $(UTILS_BONUS) -o $(SERVER_NAME) $(CFLAGS)
	@echo "📥 Server Bonus $(BOLD_GREEN)ready$(NO_COLOR)!"
client:
	@$(CC) $(CLIENT) $(UTILS) -o $(CLIENT_NAME) $(CFLAGS)
	@echo "📟 Client $(BOLD_GREEN)ready$(NO_COLOR)!"
client_bonus:
	@$(CC) $(CLIENT_BONUS) $(UTILS_BONUS) -o $(CLIENT_NAME) $(CFLAGS)
	@echo "📟 Client Bonus$(BOLD_GREEN)ready$(NO_COLOR)!"
clean:
	@rm -rf $(SERVER_NAME) $(CLIENT_NAME)
	@echo "🧼 $(BOLD_YELLOW)Clean: $(NO_COLOR)Removed the executables"
fclean:
	@rm -rf $(SERVER_NAME) $(CLIENT_NAME)
	@echo "🧼 $(BOLD_YELLOW)Fclean: $(NO_COLOR)Removed the executables"
re: clean all

.PHONY: kaanend server client all clean re bonus
