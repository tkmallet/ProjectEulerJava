/*
The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.
*/




/*
WHILE THIS PROGRAM IS LOGICALLY SOUND, I CANNOT FOR THE LIFE OF ME FIGURE OUT WHY
IT STOPS COMPUTING. I BELIEVE THERE IS SOME TYPE OF OVERFLOW BUT I CANNOT FIGURE IT OUT, IN C++, JAVA OR PYTHON
*/
#include<stdio.h>
#include<iostream>

using namespace std;
int collatz(int);
//this is brute force but starting at the max - 1 rather than the min
int main()
{
	int steps{0}, index{500001}, max{0};

	while (index < 1000000)
	{
		steps = collatz(index);
		if (steps > max)
			max = steps;
		index++;

		//cout << index << "\t" << steps << "\t" << max << endl;
	}
	cout << max << " below " << index << endl;
}


int collatz(int x)
{
	int count{ 0 };
	while (x != 1)
	{
		if (x == 1)
			return count;
		if (x & 1)
			x = (3 * x + 1);
		else
			x = x / 2;

		count++;
	}
	return count;
}