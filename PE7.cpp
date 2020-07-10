/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include <iostream>
#include <math.h>

using namespace std;

bool checkPrime(__int32);

//brute force

int main()
{
	__int32 search = 1; // current number
	int count = 0;// current count of primes
	int targetPrimeCount = 10001;
	bool prime;

	while (1)
	{
		prime = checkPrime(search);
		if (prime)
			count+=1;
		if (count == targetPrimeCount)
			break;
		search+=1;
	}
	printf("%i is the %i'th prime\n", search, count);
}

bool checkPrime(__int32 x)
{
	if (x == 0 || x == 1)
		return false;
	if (x == 2)
		return true;
	
	for (int i = 2; i < ((x / 2) + 1); i++)
	{
		if (x % i == 0)
			return false;
	}
	return true;
}