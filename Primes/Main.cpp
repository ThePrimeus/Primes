#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int temp_num = 2, check_num = 0, number_of_primes = 0, amount_to_find;
	bool prime = true;

	cout << "How many prime numbers would you like to find?: ";
	cin >> amount_to_find;
	cout << endl << endl;

	vector <int> primes_found(amount_to_find);

	while (number_of_primes < amount_to_find)
	{

		check_num = 0;
		bool prime = true;

		while (prime == true && primes_found[check_num] < ((temp_num + 1)))
		{
			if (primes_found[check_num] == 0)
			{
				primes_found[check_num] = temp_num;
				break;
			}
			else if (temp_num % primes_found[check_num] == 0)
			{
				prime = false;
			}

			check_num++;
		}

		if (prime == true)
		{
			cout << temp_num << "\t" << number_of_primes + 1 << endl;
			number_of_primes++;
		}

		if (temp_num > 2)
		{
			temp_num++;
		}

		temp_num++;
	}

	cout << endl << endl;
	system("pause");

	return(0);
}