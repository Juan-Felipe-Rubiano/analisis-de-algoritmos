CC = gcc
CFLAGS = -Wall -Wextra -O0 -std=c11 -Iinclude

SRC_DIR = src
BIN_DIR = bin

TARGET = $(BIN_DIR)/main

SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(SRC:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJ) | $(BIN_DIR)
	$(CC) $(OBJ) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

run: all
	./$(TARGET)

clean:
	rm -f $(SRC_DIR)/*.o $(TARGET)

.PHONY: all run clean
