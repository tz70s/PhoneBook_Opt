main:pbook.o data.o
	gcc -O0 -o main main.c $^
pbook.o:pbook.c pbook.h
	gcc $^ -c -O0
data.o:data.c
	gcc $^ -c -O0
clean:
	rm -rf main *.o

