src = $(wildcard *.c)
obj = $(patsubst %.c,%.o,$(src))
target = app
CC = gcc
$(target):$(obj)
	$(CC) $(obj) -o $(target) -Wall
%.o: %.c
	$(CC) -c $< -o $@
.PHONY:clean
clean:
	rm -rf $(obj)
