/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143
*/

#include <iostream>

using namespace std;

long factorize(unsigned __int64);

int main()
{
	unsigned __int64 subjectNumber = 600851475143;

	cout << "largest prime: " << factorize(subjectNumber);
}

long factorize(unsigned __int64 x)
{
	//find a number that leaves no remainder
	//reassign its compliment and factor that
	unsigned int sFactor = 2;
	unsigned __int64 bFactor = x;
	unsigned __int64 largestPrime{};

	while (sFactor < (bFactor / 2))
	{
		if (bFactor % sFactor == 0)
		{
			bFactor = (bFactor / sFactor);
			sFactor = 2;
			largestPrime = bFactor;
		}
		else
			sFactor++;
	}
	return largestPrime;
}