BMI: count_BIM.o main.o
	g++ -o BMI main.o count_BIM.o
count_BIM.o:
	g++ -c count_BIM.cpp
main.o:
	g++ -c main.cpp
clean:
	rm count_BIM.o main.o

