#include <iostream>
#include <random>
using namespace std;

int main()
{
	random_device rd;	// only used once to initialize (seed) engine
	mt19937_64 rng(rd());	// random-number engine used (Mersenne-Twister in this case)

	// output 10 random number
	for (int i = 0; i < 10; i++)
	{
		auto random_integer = rng();
		cout << random_integer << "\t";

		if ((i + 1) % 5 == 0)
			cout << endl;
	}

	// output 10 random number in the range 1 to 100 
	uniform_int_distribution<int> uni(1, 100);
	for (int i = 0; i < 10; i++)
	{
		auto random_integer = uni(rng);
		cout << random_integer << "\t";

		if ((i + 1) % 5 == 0)
			cout << endl;
	}
	
	return 0;
}
