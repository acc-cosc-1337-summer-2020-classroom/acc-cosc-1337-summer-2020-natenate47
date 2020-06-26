//write include statements
#include "decisions.h"
#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::string;
/*
In main write code to capture a letter_grade and credit_hours from the keyboard:

Grade   Credit Hours	grade_points   credit_points
A          3            4              12
B          3            3               9
C          3            2               6
-----------------------------------------------
           9                           27
After each user input convert the Grade to grade points by calling the get_grade_points function, and
keep a running total for both credit_points and credit_hours.

Call the calculate_gpa function with its arguments.
The GPA should calculate to 3.0, make sure to display it before program exits.

Display:
GPA 3.0

*/
int main() 
{
    // initialize variables
    std::string letter_grade = ""; 
    int credit_hours, sum_credit_hours = 0, sum_credit_points = 0;
    char choice;
    // loop for user to enter letter grade, credit hours, then choose to continue or not
    do {
    	std::cout << "Enter letter grade: ";
    	std::cin >> letter_grade;
   	 	std::cout << "Enter credit hours: ";
    	std::cin >> credit_hours;
    	sum_credit_points += get_grade_points(letter_grade)  * credit_hours;
    	sum_credit_hours += credit_hours;

    	std::cout<<"\n";

    	std::cout << "Enter y or Y to continue: ";
    	std::cin >> choice;

    	std::cout<<"\n";
    }
    while (choice == 'y' || choice == 'Y');
}