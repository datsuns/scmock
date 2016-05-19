TARGET := scmock_test
CFLAGS += -I../scmock

all: $(TARGET)
	./$(TARGET)

$(TARGET): *.c ../scmock/scmock.h
	$(CC) $(CFLAGS) -o $@ *.c
