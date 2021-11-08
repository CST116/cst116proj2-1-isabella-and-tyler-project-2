/*Tyler Taormina and Isabella Mon
 * CST 116
 * 
 * Project 2 
 */

#include <iostream>
#include <iomanip>

using namespace std;

int GetData();
void DisplayMenu (int&);
void ProcessMenuChoice (int, int&);
void IsPosNeg (int);
void IsOddEven (int);

int main() {
    int User_Value = 2;
    IsOddEven(User_Value);

    return 0;
}


int GetData(){
    //receives input from user within negative million and positive million.
    int usr_data = 0;

    cout << "Please enter the number you would like to tested: ";
    cin >> usr_data;

    if (usr_data < -1000000 || usr_data > 1000000 ){
        cout << "Sorry. The number you have entered is out of bounds. Please try again." << endl;
        GetData();
    }
    return usr_data;
}


void DisplayMenu(int& menu_choice) {
    //displays the menu of functions for the user to choose from

    cout << "1) Determine if the number is positive or negative.\n";
    cout << "2) Determine if the number is odd or even.\n";
    cout << "3) Determine the number of digits in the entered number.\n";
    cout << "4) Determine what digit is at a given position in the number.\n";
    cout << "5) Display Addition Table.\n";
    cout << "6) Display Multiplication Table.";
    cout << "7) Exit Program.\n\n";
    cout << "Enter: ";
    cin >> menu_choice;
    if (menu_choice > 7 || menu_choice < 1) {
        cout << "Invalid Entry. Please enter a  number from the options list provided." << endl;
        DisplayMenu(menu_choice);
    }
}


void ProcessMenuChoice (int menu_choice, int& usr_data) {
    cout << "Processing.";
}


void IsPosNeg (int usr_data) {
    // checks whether the number entered is positive or negative. 
    // Displays appropriate message. 
    if (usr_data < 0) 
        cout << "The number is negative" << endl;
    else if (usr_data > 0)
        cout << "The number is positive." << endl;
    else
        cout << "The number is zero." << endl;

}


void IsOddEven(int usr_data) {
    // checks if the user enterd number is odd or even.
    // displays an appropriate message. 

    if ((usr_data % 2) == 0)
        cout << "The number is even." << endl;
    else 
        cout << "The number is odd." << endl;

}





























