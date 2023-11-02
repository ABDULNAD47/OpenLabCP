#include<iostream>
using namespace std;
void main()
{
	int book = 5;
	int fine = 1;
	int amount = 0;
	int days;
	string choice;
	while (1)
	{
		cout << " Menu \n";
		cout << "1. Borrow \n";
		cout << "2. Return \n";
		cout << "3. Quit(Q) \n";
		cout << "Select One: ";
		cin >> choice;
		if (choice == "1")
		{
			int x;
			cout << "\nBooks:\n";
			cout << "1. To Kill A Mockingbird\n";
			cout << "2. The Great Gatsby\n";
			cout << "3. The Catcher in the Rye\n";
			cout << "4. The Grapes of Wrath\n";
			cout << "5. Beloved\n";
			cout << "Choose a Book: ";
			cin >> x;
			if (x > 0)
			{
				cout << "Book Borrowed \n\n";
			}
			else
			{
				cout << "No book available\n";

			}
		}
		else if (choice == "2")
		{
			if (book < 7)
			{
				book++;
				cout << "Enter the no. of Days: ";
				cin >> days;
				fine = days * fine;
				cout << "Book Returned\n";
			}
			else
			{
				cout << "Can't Return Library is full \n";

			}

		}
		else if (choice == "3" || choice == "Q" || choice == "q")
		{
			cout << "Total fine: $" << fine << endl;

			cout << "Thankyou for using library\n";
			break;
		}
		else
		{
			cout << "Invalid Choice\n";
		}
	}
	
}