// lab3-jspauld5.cpp 

// Jared Spaulding 25 sept 2017
// Lab 3 assignment with numeric overfow

#include <iostream> 

using namespace std;

float factorial(long n)
{
	float sum = 1;
    if (n > 1)
    {
    	while (n > 1)
    	{
    		sum *= n;
    		n--;
    	}
    	return sum;
    }
    else 
    	return 1;
}

double factorialD(long n)
{
	double sum = 1;
    if (n > 1)
    {
    	while (n > 1)
    	{
    		sum *= n;
    		n--;
    	}
    	return sum;
    }
    else 
    	return 1;
}

float f(long n)
{
	float sum = 0, ratio = 1.0 / n;
	while (n > 1)
	{
		sum += ratio;
		n--; 
	}
	return sum;
}

double fD(long n)
{
	double sum = 0, ratio = 1.0 / n;
	while (n > 1)
	{
		sum += ratio;
		n--; 
	}
	return sum;
}

int main() 
{
	// #s 1 and 2 using type short 
	short n1 = 1, sum1;
	while (n1 < 257)
	{
		sum1 += n1;
		n1++;
	}
	cout << "Sum for type short: \t " << "n is: " << n1 << "\t sum is: " << sum1 << endl;
	// when n is short and 256 or above the sum becomes a negative number

	// #s 1 and 2 using type long
	long n2 = 1, sum2;
	while (n2 < 7787763)
	{
		sum2 += n2;
		n2++;
	}
	cout << "Sum for type long: \t " << "n is: " << n2 << "\t sum is: " << sum2 << endl;
	// when n is long and 7,787,762 or above the sum becomes a negative number

	// #4 using type float sum and long couter
	cout << "Factorial for sum type flaot: \t" << factorial(35) << endl;
	// when n is long and 35 or above the sum of float becomes 'inf'

	// #4 using type double as sum and long counter 
	cout << "Factorial for sum type double: \t" << factorialD(171) << endl;
	// when n is long and 171 or above the sum of double becomes 'inf'

	// #6
	cout << "1/n sum as Float: " << f(44860) << endl;
	// the expected value if calculations are perfect would be 1
	// when using a sum of type float and n is 44,860 then the output is 1
	cout << "1/n sum as double: " << fD(1999877) << endl;
	// when using a sum of type double and n is 1,999,877 then the output is 1

	// PUZZLE TIME #7
	for (float i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
 	}
 	// the numeric error occurs on the last iteration. it shouldnt print out 4.4
 	// the numeric error occurs because floats are 4 bytes and have much less precision
 	
 	cout << endl;

 	// PUZZLE TIME #8
 	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
 	}
 	// changing the type to double makes it work because doubles are 8 bytes making 
 	// them much more precise
	return 0;
}
