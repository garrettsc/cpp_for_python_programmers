g++ -c some_class.cpp -o some_class.o
g++ -c main.cpp -o main.o
g++ some_class.o main.o -o main
./main