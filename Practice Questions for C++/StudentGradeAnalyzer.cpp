#include <iostream>

using namespace std;

int main(){
    int marks;
    int total = 0;

    for (int i = 1; i <= 5; i++){
        cout << "Enter marks for subject " << i << ": " << endl;
        cin >> marks;
        total += marks;
    }
    float percentage = (total / 500.0) * 100;

    char grade;
    
    if(percentage >= 85){
        cout << "Grade A" << endl;
    }
    else if(percentage >= 75){
        cout << "Grade B" << endl;
    }
    else if(percentage >= 65){
        cout << "Grade C" << endl;
    }
    else if(percentage >= 55){
        cout << "Grade D" << endl;
    }
    else{
        cout << "fail." << endl;
    }

    cout << "The percentage of the student is " << percentage << endl;

    int choice;
    do{
        cout << "====MENU====" << endl;
        cout << "1. Show total marks " << endl;
        cout << "2. Show percentage " << endl;
        cout << "3. Show grade " << endl;
        cout << "4. Exit " << endl;
        cout << "Enter your choice: " << endl;
        cin >> choice;

        switch(choice){
            case 1:
            cout << "Total marks: " << total << " 500 " << endl;
            break;

            case 2:
            cout << "Percentage is " << percentage << "%" << endl;
            break;

            case 3:
            cout << "Grade is " << grade << endl;
            break;

            case 4:
            cout << "Exiting program " << endl;
            break;

            default:
            cout << "Invalid choice! Try again" << endl;
        }
        while (choice != 4);
    }
    return 0;
}