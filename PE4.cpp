/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>
#include <vector>

using namespace std;

bool palindrome(long);
bool checkMultiples(long);

int main()
{
	//find the max possible number
	long pali = (999 * 999);

	//check all smaller numbers if they are a palindrome
	while (1)
	{
		if (!palindrome(pali))
			pali--;
		else
			break;
	}
	cout << pali;
}

bool palindrome(long x)
{
	long original = x;
	long reverse = 0;
	int rem = 0;

	while (x > 0)
	{
		rem = x % 10;
		reverse = (reverse * 10) + rem;
		x /= 10;
	}
	 
	if (original == reverse && (original > 100 * 100))
	{
		if (checkMultiples(original))
			return true;
		else
			return false;
	}
	else
		return false;
}

bool checkMultiples(long x)
{
		for (int i = 999; i >= 100; i--)
		{
			if ((x / i >= 100) && (x / i <= 999) && (x % i == 0))
			{
				cout << x << " " << (x / i) << " " << i << endl;
				return true;
			}
		}
		return false;
}