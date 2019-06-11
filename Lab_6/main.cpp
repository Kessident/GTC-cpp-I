//Charles Dodge
//CIST 2361 CRN 45385
//Lab_6
#include <iostream>
using namespace std;

int main() {
    int employeeNumber, grossPay, stateTax, federalTax, FICAWithholdings;

    while (true) {
        cout << "Enter your employee number (0 exits the program): ";
        cin >> employeeNumber;
        if (employeeNumber == 0)
            break;

        cout << "Enter your gross pay: ";
        cin >> grossPay;
        while (grossPay < 0) {
            cout << "Gross pay must be greater than 0: ";
            cin >> grossPay;
        }

        cout << "Enter the state tax amount: ";
        cin >> stateTax;
        while (stateTax < 0) {
            cout << "State tax must be greater than 0: ";
            cin >> stateTax;
        } while (stateTax > grossPay) {
            cout << "State tax must be less than gross pay: ";
            cin >> stateTax;
        }

        cout << "Enter the federal tax amount: ";
        cin >> federalTax;
        while (federalTax < 0) {
            cout << "Federal tax must be greater than 0: ";
            cin >> federalTax;
        } while (federalTax > grossPay) {
            cout << "Federal tax must be less than gross pay: ";
            cin >> federalTax;
        }

        cout << "Enter the FICA Withholdings: ";
        cin >> FICAWithholdings;
        while (FICAWithholdings < 0) {
            cout << "FICA Withholdings must be greater than 0: ";
            cin >> FICAWithholdings;
        } while (FICAWithholdings > grossPay) {
            cout << "FICA Withholdings must be less than gross pay: ";
            cin >> FICAWithholdings;
        }

        if (stateTax + federalTax + FICAWithholdings > grossPay){
            cout << "Invalid data entered, try again" << endl << endl;
        } else {
            cout << "Gross pay: " << grossPay << endl;
            cout << "State tax: " << stateTax << endl;
            cout << "Federal Tax: " << federalTax << endl;
            cout << "FICA Withholdings: " << FICAWithholdings << endl;
            cout << "Net pay: " << (grossPay - stateTax - federalTax - FICAWithholdings) << endl;
        }

    }

    return 0;
}









/*
int main() {
    int numStudents;
    string firstStudent, lastStudent, currentStudent;
    firstStudent = "";
    lastStudent = "";
    currentStudent = "";
    // negative is before
    cout << "Enter number of students in class: ";
    cin >> numStudents;

    while (numStudents < 1 || numStudents > 25){
        cout << "Number of students must be greater than 1 and less than 25";
        cin >> numStudents;
    }

    //At least 1 student, need something to compare against
    cout << "Enter student name: ";
    cin >> currentStudent;
    firstStudent = currentStudent;
    lastStudent = currentStudent;

    for (int i = 1; i < numStudents; ++i) {
        cout << "Enter student name: ";
        cin >> currentStudent;

        if (firstStudent.compare(currentStudent) > 0) { //firstStudent would come after currentStudent
            firstStudent = currentStudent;
        } else if (lastStudent.compare(currentStudent) < 0) { //lastStudent would come before currentStudent
            lastStudent = currentStudent;
        }
    }

    cout << firstStudent << " is at the front of the line, " << lastStudent << " is at the rear of the line.";
    return 0;
}
*/


/*
int main() {
    int numYears, numMonths, rainfall = 0;
    double sumRainfall;
    cout << "This program displays average rainfall." << endl
         << "Please enter a number of years: ";
    cin >> numYears;

    while (numYears < 1){
        cout << "You must enter at least 1 for the number of years: ";
        cin >> numYears;
    }

    numMonths = numYears * 12;
    for (int i = 0; i < numYears; i ++){
        for (int j = 0; j < 12; j++){
            cout << "Enter the amount of rainfall (in inches) in month " << (j + 1) << " of year " << (i + 1) << ": ";
            cin >> rainfall;

            while (rainfall < 0) {
                cout << "Rainfall cannot be negative: ";
                cin >> rainfall;
            }
            sumRainfall += rainfall;
        }
    }

    cout << "Total number of months: " << numMonths << endl;
    cout << "Total rainfall: " << sumRainfall << " inches" << endl;
    cout << "Average rainfall: " << (sumRainfall / numMonths);
    return 0;
}
*/