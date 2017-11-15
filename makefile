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

test:
	$(C_COMPILER) TestCalculator.c Calculator.c unity/src/unity.c -o test

calc:
	$(C_COMPILER) main.c Calculator.c -o calc
