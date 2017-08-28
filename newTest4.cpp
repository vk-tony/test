//Program 04\
//


#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int myPrompt(void);
int mySum(int input);
int myFact(int input);
int myMod(int input);
void myPrint(int input, int actual);

int main()
{
	int input;
	int difference;
	input = myPrompt();

	while (input != -9999)
	{
	if (input < 10)
	{
	difference = myFact(input);
	myPrint(input, difference);
	input = myPrompt();
	}
	else
	{
		cout << " Did Nothing. " << endl;
	}

	}

	return 0;
}

int myPrompt(void)
{
	int input = -1;
	while (input < 0 && input != -9999)
	{
		cout << "Enter a non-negative number or -9999" << endl;
		cin >> input;
	}
	return input;
}


int myFact(int input)
{
	int start_value = 1;
        int end_value = input;
        int nextInt;
        int product;
        int counter;
        int limit;
        int myFact;

	if (end_value == 0 || end_value == 1)
	{
		myFact = 1;
	}

	else 
	{
		nextInt = start_value + 1;
		product = start_value * nextInt;

		limit = (end_value - start_value) - 1;

		counter = 0;
		while (counter < limit)
		{		
			nextInt = nextInt + 1;
			product = product * nextInt;
			counter = counter + 1;
		}
		myFact = product;
	
	}
		

	return myFact;
}

void myPrint(int input, int difference)
{
	if (input < 10)
	{
		cout << "Product id from 1 to " << input << "is " << difference << endl;

	else 
	{
		cout << "Nothing." << endl;
	}
	}
}
