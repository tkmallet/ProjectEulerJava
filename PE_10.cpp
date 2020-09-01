/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/
#include <stdio.h>
#include <inttypes.h>
#include <vector>

using namespace std;

//using the sieve of Eratosthenes
int main()
{
	int limit = 2000000;
	vector<int> store;
	intmax_t sum{};

	//create a vector of 2 -> 2 mill
	store.push_back(0);
	store.push_back(1);
	for (int i = 2; i < limit; i++)
	{
		store.push_back(i);
	}
	printf("finished loading\n");

	//as we progress through the vector, zero out that numbers multiples, leaving it as the unique prime

	//start the search at the square of the number
	for (int i = 2; i * i < limit; i++)
	{
		if (store.at(i) != 0)
		{//search for all multiples of the square (this is done by incrementing by the base number since it will need to be a multiple)
			for (int j = i * i; j < store.size(); j+= i)
			{
				store.at(j) = 0;
			}
		}
	}
	printf("finished zeroing single digit multiples\n");

	for (int i = 2; i < store.size(); i++)
	{
		sum += store.at(i);
	}

	printf("Answer: %" PRIdMAX ".\n", sum);
}
