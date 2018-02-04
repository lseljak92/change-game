/*
 * Description: Change counting game.
 * Name: Luciana Seljak
 * File name: DollarGame.cpp
 *
 */

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

int main ()
{
// Define variables needed
const double PENNIES_VALUE = 0.01;
const double NICKELS_VALUE = 0.05;
const double DIMES_VALUE = 0.10;
const double QUARTERS_VALUE = 0.25;
double pennies;
double nickels;
double dimes;
double quarters;

// Display welcoming message, ask user to input data
	cout << endl;
	cout << "Let's play a change-counting game. \n"
	     << "Enter the number the coins needed to make exactly one dollar." << endl;
	cout << endl;
	cout << "Enter the number of pennies: ";
	cin >> pennies;
	cout << "Enter the number of nickels: ";
	cin >> nickels;
	cout << "Enter the number of dimes: ";
	cin >> dimes;
	cout << "Enter the number of quarters: ";
	cin >> quarters;
	cout << endl;

//Define a total variable
double total = (pennies * PENNIES_VALUE) + (nickels * NICKELS_VALUE) + (dimes * DIMES_VALUE) + (quarters * QUARTERS_VALUE);

	if (total == 1)
	   cout << "Congratulations! You win!" << endl;
	else if (total < 1)
	   cout << "Sorry, that's less than one dollar." << endl;
	else
	   cout << "Sorry, that's more than one dollar." << endl;

	cout << endl;
	cout << "Programmed by Maria Seljak" << endl;
	cout << endl;

	return 0;
}


// Sample Run
/*

SAMPLE 1

Let's play a change-counting game. 
Enter the number the coins needed to make exactly one dollar.

Enter the number of pennies: 10
Enter the number of nickels: 4
Enter the number of dimes: 2
Enter the number of quarters: 2

Congratulations! You win!

///////////////////////////////////////////////////////////////

SAMPLE 2

Let's play a change-counting game. 
Enter the number the coins needed to make exactly one dollar.

Enter the number of pennies: 23
Enter the number of nickels: 10
Enter the number of dimes: 15
Enter the number of quarters: 4

Sorry, that's more than one dollar.

///////////////////////////////////////////////////////////////

SAMPLE 3

Let's play a change-counting game. 
Enter the number the coins needed to make exactly one dollar.

Enter the number of pennies: 2
Enter the number of nickels: 1
Enter the number of dimes: 3
Enter the number of quarters: 1

Sorry, that's less than one dollar.


*/

