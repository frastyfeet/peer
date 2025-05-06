all: one two three five six seven eight nine ten

one: 1/func.cpp 1/main.cpp
	g++ 1/func.cpp 1/main.cpp -o init_1

two: 2/main.cpp 2/func.cpp
	g++ 2/func.cpp 2/main.cpp -o init_2

three: 3/main.cpp 3/func.cpp
	g++ 3/main.cpp 3/func.cpp -o init_3

# four: 4/quicksort.cpp
# 	g++ 4/quicksort.cpp -o init_4

five: 5/min_max.cpp
	g++ 5/min_max.cpp -o init_5

six: 6/6.cpp
	g++ 6/6.cpp -o init_6

seven: 7/rand.cpp
	g++ 7/rand.cpp -o init_7

eight: 8/rand_mass.cpp
	g++ 8/rand_mass.cpp -o init_8

nine: 9/find.cpp
	g++ 9/find.cpp -o init_9

ten: 10/10.cpp
	g++ 10/10.cpp -o init_10

clean:
	rm init*
format:
	find . -type f \( -name "*.cpp" -o -name "*.h" \) -print0 | xargs -0 clang-format -i
