CC = gcc
CFLAGS = -Wall -O2
TARGET = ptimer
SRC = main.c file.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
