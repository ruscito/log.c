all:
	gcc main.c src/log.c -o main -I include -DLOG_USE_COLOR