#include <iostream>

using namespace std;

/*
SOLVE THE QUESTION:

Write a C++ program to create a Study Tracker System.

1. The program should ask the user to enter study hours 
   for each of the last 7 days and calculate the total 
   and average study hours using a FOR loop.

2. If the total study hours are less than 50, the program 
   should repeatedly ask the user to enter additional 
   study hours until the total reaches or exceeds 50, 
   using a WHILE loop.

3. After reaching the target, display a congratulatory message.

4. Then create a menu-driven system using a DO-WHILE loop 
   with the following options:
      1. Show total study hours
      2. Show remaining hours (if any)
      3. Exit

5. Use a SWITCH statement inside the menu.

6. The menu should continue running until the user 
   chooses to exit.

Ensure proper indentation and meaningful variable names.
*/


/*SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST

SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST

SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST

SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST

SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST
SOLVE THE QUESTION FIRST*/

int main(){
    int hours = 0;
    int daily;

    cout << "Enter study hours for 7 days: " << endl;
    for ( int i = 1; i <= 7; i++){
        cout << "Day " << i << ": ";
        cin >> daily;
        hours += daily;
    }
    cout << "Total study hours: " << hours << endl;
    cout << "Average study hours: " << hours / 7.0 << endl;

    while(hours < 50){
        cout << "You need more hours to reach 50" << endl;
        cout << "Enter extra study hours: " << endl;
        cin >> daily;
        hours += daily;
    }
    cout << "Congratulations! You reached 50+ hours study. " << endl;

    int choice;
    do{
        cout << "1. Show total hours" << endl;
        cout << "2. Show remaining hours" << endl;
        cout << "3. Exit " << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice){
            case 1: 
            cout << "Total study hours " << hours << endl;
            break;

            case 2:
            if(hours >= 50)
            cout << "Target achieved" << endl;
            else
            cout << "remaining hours" << endl;
            break;

            case 3:
            cout << "Exiting program" << endl;
            break;

            default:
            cout << "Invalid choice" << endl;
        }
    }
    while (choice != 3);
    return 0;
}
