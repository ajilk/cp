all: 
	g++ --std=c++11 main.cpp
run:
	@./a.out
clean:
	rm -f a.out
