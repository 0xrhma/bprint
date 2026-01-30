CC      := gcc
CFLAGS  := -std=c99 -Wall -pedantic -O3 -march=native

TARGET  := main
SRC     := main.c

# -------- RULES --------
all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean