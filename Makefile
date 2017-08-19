#
# Makefile for creating library
#
# Manuel Nila - July 2017
#

TARGET = libmn.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
INC = -I ./include
FILES = $(wildcard ./src/*.c)

.PHONEY: all clean fclean re

all: $(TARGET)

clean:
	@rm -rf ./bin

fclean: clean
	@rm -f $(TARGET)

re: fclean all

$(TARGET): $(FILES)
	@mkdir -p ./bin
	@$(CC) $(INC) $(CFLAGS) -c $^
	@ar rc $@ *.o
	@ranlib $@
	@mv *.o ./bin
