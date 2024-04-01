all:  main.o Hash_Table.o
	g++ main.o Hash_Table.o -o main

Hash_Table.o: Hash_Table.cpp
	g++ -c Hash_Table.cpp -o Hash_Table.o 

main.o: main.cpp
	g++ -c main.cpp -o main.o 

clean:
	rm -f *.o main