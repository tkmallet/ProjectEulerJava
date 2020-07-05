/*
PE1

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/
#include<iostream>

using namespace std;

struct variables {
private:
	const int NUM1 = 3;
	const int NUM2 = 5;
	const int LIMIT = 1000;
	long sum = 0;
public:
	void getSum();
	long getResult();
};

int main()
{
	variables vari;
	vari.getSum();

	cout << vari.getResult();

	return 0;
}

void variables::getSum()
{
	for (int i = 1; i < LIMIT; i++) {
		if (i % NUM1 == 0 || i % NUM2 == 0)
			sum += i;
	}
}

long variables::getResult()
{
	return sum;
}