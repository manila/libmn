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

all: $(TARGET)

clean:
	@rm -rf ./bin

fclean: clean
	@rm -f $(TARGET)

re: fclean all

$(TARGET):
	@mkdir -p ./bin
	@$(CC) $(INC) $(CFLAGS) -c $(FILES)
	@ar rc $(TARGET) *.o
	@ranlib $(TARGET)
	@mv *.o ./bin
