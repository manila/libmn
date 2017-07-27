#
# Makefile for creating library
#
# Manuel Nila - July 2017
#

TARGET = libmn.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
INC = -I ./inc
FILES = $(wildcard ./src/*.c)
OBJS = $(wildcard ./*.o)


all: $(TARGET)

clean:
	rm -rf ./bin/*.o

fclean: clean
	rm -f $(TARGET)

re: fclean all

$(TARGET):
	$(CC) $(CFLAGS) -c $(FILES)
	ar rc $(TARGET) $(OBJS)
	ranlib $(TARGET)
