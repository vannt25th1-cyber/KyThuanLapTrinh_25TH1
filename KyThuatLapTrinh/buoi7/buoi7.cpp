

#include <iostream>
#include "Account.h"
#include "LinkedList.h"

int main()
{
	LinkedList <Account> accounts = { NULL };
	do {
		system("cls");
		cout << "---------BOOK MANAGEMENT-------" << endl;
		cout << "1. show all books " << endl;
		cout << "2. Add a book " << endl;
		cout << "3.Delete a book " << endl;
		cout << "4. Update a book " << endl;
		cout << "5. Find book " << endl;
		cout << "6. Export to file" << endl;
		cout << "7. Import from file" << endl;
		cout << "0. Exit" << endl;
		cout << "-----------------------------" << endl;
		cout << "Enter your choice: ";
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1: {
			Account Show();
			break;
		}
		case 2: {
			Account a;
			cin >> a;
			accounts.Add(a);
			break;
		}
		case 3: {

			int removeId;
			cout << "Enter account id to remove: ";
			cin >> removeId;
			bool res = accounts.Remove(removeId);
			if (res)
				cout << "Remove account with id: "<< removeId << endl;
			else
				cout << "No found account id" << removeId << endl;
			break;
		}
		case 4: {
			int updateId;
			cout << "Enter account id to update:";
			cin >> updateId;
			bool res = accounts.Update(updateId);
			if (res)
				cout << "Update account with id: " << endl;
			else
				cout << "No found account id: " << endl;
			break;
		}
		case 5: {
			string userName;
			cout << "Enter account name: ";
			cin.ignore();
			getline(cin, userName);
			accounts.Find(userName);
			break;
		}
		case 6: {
			accounts.Export();
			break;
		}
		case 7: {
			accounts.Export();
			break;
		}
		case 0: {
			break;
		}
		default: {
			cout << "Invalid choice, try again" << endl;
			break;
		}
		}
		system("pause");
		cout << "Press any key to continue...";
	} while (true);
}



