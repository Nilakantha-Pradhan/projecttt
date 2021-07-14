#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;
//Centurion University Central Library :-)//
struct student //class student structure
{
	int bookID;
	char title[30];
	char authorofbook[30];
	int costofbook;
	int duration;
};
const int books = 5; //Maximum 5 book Enter in the record
int arr, arr1;		 //array declared
student studentobj[books];

void Add_Book() //ENTER THE BOOK RECORD
{
	if (arr < books)
	{
		cout << "---***which book you want---***" << endl;
		cout << "isbn no. of the book=" << endl;
		cin >> studentobj[arr].bookID;
		cout << "Book name" << endl;
		cin >> studentobj[arr].title;
		cout << "cost of book=" << endl;
		cin >> studentobj[arr].costofbook;
		arr++;
	}
	else
	{
		cout << "only 5books max" << endl;
	}
}

void Display_Books() //DISPLAY THE BOOK RECORD
{

	if (arr1 < 3)
	{
		cout << "---**return the book**---";
		cout << "enter the isbn no. of the book1=" << studentobj[arr1].bookID << endl;
		cout << "Book name=" << studentobj[arr1].title << endl;
		cout << "how may days back you took " << studentobj[arr1].duration << endl;
		cout << "cost of book=" << studentobj[arr1].costofbook << endl;
		arr1++;
	}
	else
	{
		cout << "only 3 books you can issue";
	}
}

int main() //MAIN BODY START
{
	int choice;
	char input;
	/*string username = "";
    string password = "";
    bool loginSuccess = false;

    cout <<"\tWelcome! User Please login below.\n\n";
    do{
        cout <<"Username: ";
        cin >> username;
        cout<< "Password: ";
        cin >> password;
        
        if (username == "200101120051" && password == "cutm123") {
            cout << "\nLogin Successful\n\n";
            loginSuccess = true;
        }
        else{
            cout << "Incorrect username or password \n";
            cout <<"Please try again \n" ;
        }

    }while(!loginSuccess);

    system("pause"); */

	do
	{
		cout << "***---Library Book Record System***--" << endl;
		cout << "Press 1 issue a book:" << endl;
		cout << "press 2 return a book:" << endl;
		cout << "press 3 to Exist from the system:" << endl;
		cout << "Enter the choice:" << endl;
		cin >> choice;

		switch (choice) //Switch statement used
		{
		case 1: //case 1 Add Book
			Add_Book();
			cout << "so uh want the book" << studentobj[arr].bookID << endl;
			break;
		case 2: //Case 2 Display Book
			Display_Books();
			break;
		case 3: //case 5 exit
			exit(0);
		default:
			cout << "invalid choice please try again";
		}
		cout << "Are you want to continue,please press y or Y" << endl;
		cin >> input;

	} while (input == 'y' || input == 'Y');
}