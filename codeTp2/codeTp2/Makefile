# A mettre a jour : répertoire d'installation de Google Test
GTEST_DIR = ./googletest/googletest
GTEST_LIB = ./googletest/lib

CPP_FLAGS = -isystem $(GTEST_DIR)/include  -g -Wall -Wextra -pthread -std=c++17

GTEST_HEADERS = $(GTEST_DIR)/include/gtest/*.h \
                $(GTEST_DIR)/include/gtest/internal/*.h

mytest2.o: mytest2.cpp Calculator.h
	g++ -c $(CPP_FLAGS) mytest2.cpp

Calculator.o: Calculator.cpp Calculator.h
	g++ -c $(CPP_FLAGS) Calculator.cpp

mytest2.out: mytest2.o Calculator.o
	g++ $(CPP_FLAGS) -o mytest2.out mytest2.o Calculator.o -lpthread $(GTEST_LIB)/libgtest.a $(GTEST_LIB)/libgtest_main.a
