/***************************************************************
MEE 381         Program 1     Fall 2017

Programmer: Jason Ostenburg

Section: MEE 381-0001

Date Due: 9-13-2017

Purpose: To find a variable number of prime numbers in ascending order
***************************************************************/


#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int temp_num = 2, check_num = 0, number_of_primes = 0, amount_to_find;	// Initialize the variables used in the program
	bool prime = true;

	cout << "How many prime numbers would you like to find?: ";				// Asks user for the amount of prime numbers to find
	cin >> amount_to_find;
	cout << endl << endl;

	vector <int> primes_found(amount_to_find);								// Creates a vector to store prime numbers

	while (number_of_primes < amount_to_find)								// Loop to find prime numbers
	{

		check_num = 0;														// Reintialize the variables used in the loop
		bool prime = true;

		while (prime == true)												// Loop to check if a number is prime
		{
			if (primes_found[check_num] == 0)								// Checks if a number has not been marked as not prime and was not evenly divisable by the previously found primes
			{
				primes_found[check_num] = temp_num;							// Stores the number in the vector
				break;														// Ends the loop to check if a number is prime
			}
			else if (temp_num % primes_found[check_num] == 0)				// Checks if a number is evenly divisable by a previously found prime number
			{
				prime = false;
			}

			check_num++;													// Increments the number used to test if a number is prime
		}

		if (prime == true)													// Checks if a number was prime
		{
			cout << temp_num << "\t" << number_of_primes + 1 << endl;		// Displays the prime number and its position
			number_of_primes++;												// Increments the number of found prime numbers
		}

		if (temp_num > 2)													// Checks to see if the number being checked as a prime is greater than 2
		{
			temp_num++;														// Increments the number being checked as a prime (stops the program from checking if an even number is prime0
		}

		temp_num++;															// Increments the number being checked as a prime												
	}

	cout << endl << endl;
	system("pause");

	return(0);
}