CC = gcc
CFLAGS = -Iinclude
SRC_DIR = src
BUILD_DIR = build
EXECUTABLE = ToDoApp

# List of source files
SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(SRCS))

# Resource file for custom icon
RESOURCE = resource.o

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS) $(RESOURCE)
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(RESOURCE): resource.rc
	windres resource.rc -o $(BUILD_DIR)/$@

clean:
	rm -f $(BUILD_DIR)/*
