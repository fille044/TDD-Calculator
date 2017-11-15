# -------------------------------------------*/
#
#    Filip Lindström & Johan Kämpe
#    Last changed :  2017 - 11- 15
#    Created:        2017 - 11 - 15

#    Test och verifiering - Mölk Utbildning

#    Description: Compiles and builds executable
#           Commands: "make test" to build test program
#                     "make calc" to build user interface
#
# -------------------------------------------#

C_COMPILER=gcc
LIB=Calculator.h
UNITY=../unity/src/unity.c

test: Calculator.c TestCalculator.c $(LIB)
	$(C_COMPILER) -c Calculator.c
	$(C_COMPILER) TestCalculator.c Calculator.o $(UNITY) -o test
	-del -f *.o

calc: Calculator.c main.c $(LIB)
	$(C_COMPILER) -c Calculator.c
	$(C_COMPILER) main.c Calculator.c -o calc
	-del -f *.o
