extern_src = $(wildcard ./extern/*.c)
user_src = $(wildcard ./user/source/*.c)

include_path = ./extern/ ./user/heads/

obj = $(patsubst %.c,%.o,$(extern_src) $(user_src))

target = app

CC = gcc

$(target):$(obj)
	$(CC) $(obj) -o $(target)
%.o:%.c
	$(CC) -c $< -o $@ -I $(include_path)

clean:
	@rm -rf $(obj)
