NAME = minitalk
SERVER = server.c
SERVER_NAME = server
CLIENT = client.c
CLIENT_NAME = client
UTILS = utils.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): starter server client
starter:
	@echo "Make: Starting the compilation"
server:
	@$(CC) $(SERVER) $(UTILS) -o $(SERVER_NAME) $(CFLAGS)
client:
	@$(CC) $(CLIENT) $(UTILS) -o $(CLIENT_NAME) $(CFLAGS)
clean:
	@rm -rf $(SERVER_NAME) $(CLIENT_NAME)
fclean:
	@rm -rf $(SERVER_NAME) $(CLIENT_NAME)
re: clean all

.PHONY: server client all clean re bonus
