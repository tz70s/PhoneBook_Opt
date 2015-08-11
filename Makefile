main:pbook.o
	gcc -o main main.c $^
pbook.o:pbook.c
	gcc $^ -c
clean:
	rm -rf main *.o

