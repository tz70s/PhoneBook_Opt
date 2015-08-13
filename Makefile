main:pbook.o data.o
	gcc -o main main.c $^
pbook.o:pbook.c pbook.h
	gcc $^ -c 
data.o:data.c
	gcc $^ -c
clean:
	rm -rf main *.o

