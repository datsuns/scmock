TARGET := scmock_test
CFLAGS += -I..

all: $(TARGET)
	./$(TARGET)

$(TARGET): *.c ../scmock.h
	$(CC) $(CFLAGS) -o $@ *.c
