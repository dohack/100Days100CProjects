CC = gcc
CFLAGS = -Iinclude
SRC_DIR = src
BUILD_DIR = build
EXECUTABLE = ToDoApp

# List of source files
SRCS = $(wildcard $(SRC_DIR)/*.c)

all: $(EXECUTABLE)

$(EXECUTABLE): $(SRCS)
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@

clean:
	rm -f $(BUILD_DIR)/*

.PHONY: all clean