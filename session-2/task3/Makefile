
# Variables
CC = gcc
CFLAGS = -Wall -Wextra
TARGET = student
OBJS = main.o student.o

# Phony targets (not actual files)
.PHONY: all clean

# Default target
all: $(TARGET)

# Default target
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# Pattern rule for object files
%.o: %.c student.h structure.h
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up
clean:
	rm -f $(OBJS) $(TARGET)

