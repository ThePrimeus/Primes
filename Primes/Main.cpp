#include <iostream>
#include <vector>

using namespace std;

bool is_small_prime(int);

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
		//prime = is_small_prime(temp_num);

		check_num = 0;
		bool prime = true;

		while (prime == true && primes_found[check_num] < temp_num)
		{
			if (primes_found[check_num] == 0)
			{
				primes_found[check_num] = temp_num;
			}
			else if (temp_num % primes_found[check_num] == 0)
			{
				prime = false;
				cout << temp_num;
			}

			check_num++;
		}
		/*while (prime == true && check_num < ((temp_num + 1) / 2));
		{
			if (primes_found[check_num] == 0)
			{
				cout << "test before";
				primes_found[check_num] = temp_num;
				prime = true;
				cout << "test after";
			}

			if (temp_num % primes_found[check_num] == 0 && temp_num != primes_found[check_num])
			{
				prime = false;
			}

			cout << check_num;
			check_num++;
		} */

		if (prime == true)
		{
			cout << temp_num << "\t" << number_of_primes << endl;
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

bool is_small_prime(int temp_num)
{
	int check_num;

	for (check_num = 2; check_num < ((temp_num + 1) / 2); check_num++)
	{
		if (temp_num % check_num == 0)
		{
			return false;
		}
	}

	return true;
}