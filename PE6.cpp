/*
The sum of the squares of the first ten natural numbers is,

1^2+2^2+...+10^2=385
The square of the sum of the first ten natural numbers is,

(1+2+...+10)^2=552=3025
Hence the difference between the sum of the squares of the first 
ten natural numbers and the square of the sum is 3025−385=2640.

Find the difference between the sum of the squares of the first 
one hundred natural numbers and the square of the sum.*/

#include <iostream>
#include <math.h>

using namespace std;

//brute force

int main()
{
	__int32 sumOfSquares = 0;
	__int64 squareOfSums = 0;

	//sum of squares calculator
	for (int i = 1; i <= 100; i++)
	{
		sumOfSquares += (__int32)(pow(i, 2));
		squareOfSums += i;
	}
	squareOfSums = (__int64)(pow(squareOfSums, 2));

	cout << (squareOfSums - sumOfSquares);
}