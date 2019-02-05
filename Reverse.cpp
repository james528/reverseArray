#include<iostream>
using namespace std;

int main()
{
	int a[4]; //the main array to hold all the numbers 

	cout << "enter the numbers below" << endl;
	
	for (int i = 0; i < 4; i++) //adds the numbers into the array
	{
		cin >> a[i];
	}

	cout << "the numbers in order are: ";

	for (int j = 0; j < 4; j++)
	{
		cout << a[j] << " "; //displays the numbers in the order inputed
		
	}
	cout << endl;

	cout << "the order in reverse is: "; //displays the list of numnbers in reverse order
	for (int m = 3; m >= 0; m--)
	{
		cout << a[m] << " ";
	}

	cout << endl;

	system("pause");
	return 0;
}