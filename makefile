C_COMPILER=gcc

test:
	$(C_COMPILER) TestCalculator.c Calculator.c unity/src/unity.c -o test

calc:
	$(C_COMPILER) main.c Calculator.c -o calc
