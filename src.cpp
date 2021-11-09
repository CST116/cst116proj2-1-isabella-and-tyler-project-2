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
    int User_Value = 0;
    int Menu_choice = 0;
    User_Value = GetData();
    DisplayMenu(Menu_choice);
    ProcessMenuChoice(Menu_choice, User_Value);


    return 0;
}


int GetData(){
    //receives input from user within negative million and positive million.
    int usr_data = 0;
    cout << "================================================================" << endl;
    cout <<  "Program Running..." << endl;
    cout << "================================================================\n\n\n" << endl;
    

    cout << "Please enter the number you would like to have tested: ";
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
    cout << "6) Display Multiplication Table.\n";
    cout << "7) Exit Program.\n\n";
    cout << "Enter: ";
    cin >> menu_choice;
    if (menu_choice > 7 || menu_choice < 1) {
        cout << "Invalid Entry. Please enter a  number from the options list provided.\n\n\n\n" << endl;
        DisplayMenu(menu_choice);
    }
}


void ProcessMenuChoice (int menu_choice, int& usr_data) {
    int program_rerun = 0;
    switch(menu_choice){
        case 1: 
            IsPosNeg(usr_data);
            break;
        
        case 2: 
            IsOddEven(usr_data);
            break;

        case 3:
            cout << "Find num digits" << endl;
            break;

        case 4:
            cout << "Find digit at position" << endl;
            break;

        case 5:
            cout << "Display addition table" << endl;
            break;

        case 6: 
            cout << "Display multiplication table" << endl;
            break;

        case 7: 
            cout << "End program." << endl;
            break;

        default:
            break;
    }
    cout << "Press 1 and enter to rerun program. Enter any other number to close program: ";
    cin >> program_rerun;

    if (program_rerun == 1)
        main();
    else {
    cout << "================================================================" << endl;
    cout <<  "Program Closing..." << endl;
    cout << "================================================================\n\n\n" << endl;
}


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





























