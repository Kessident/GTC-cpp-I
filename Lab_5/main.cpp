//Charles Dodge
//CIST 2361 CRN 45385
//Lab_5
#include <iostream>
using namespace std;
int main() {
    int month, year, daysInMonth;
    bool isLeapYear;
    cout << "Enter a month (1-12): ";
    cin >> month;

    cout << "Enter a year: ";\
    cin >> year;

    if (year % 100 == 0 && year % 400 == 0){
        isLeapYear = true;
    } else if (year % 4 == 0) {
        isLeapYear = true;
    }

    switch (month){
        case 1:
            daysInMonth = 31;
            break;
        case 2:
            daysInMonth = 28;
            break;
        case 3:
            daysInMonth = 31;
            break;
        case 4:
            daysInMonth = 30;
            break;
        case 5:
            daysInMonth = 31;
            break;
        case 6:
            daysInMonth = 30;
            break;
        case 7:
            daysInMonth = 31;
            break;
        case 8:
            daysInMonth = 31;
            break;
        case 9:
            daysInMonth = 30;
            break;
        case 10:
            daysInMonth = 31;
            break;
        case 11:
            daysInMonth = 30;
            break;
        case 12:
            daysInMonth = 31;
            break;
        default:
            cout << "Invalid month entered" << endl;
    }
    if (isLeapYear && month == 2) {
        daysInMonth++;
    }
    cout << daysInMonth << " days";

    return 0;

}





    /*
    int calories, fatGrams, fatCalories, fatCalPercent, isLowFat;

    cout << "Enter number of calories: ";
    cin >> calories;
    cin.ignore();

    while (calories < 0){
        cout << "You must enter a number of calories greater than 0: ";
        cin >> calories;
        cin.ignore();
    }

    cout << "Enter number of fat grams: ";
    cin >> fatGrams;
    cin.ignore();

    while (fatGrams < 0){
        cout << "You must enter a number of fat grams greater than 0: ";
        cin >> fatGrams;
        cin.ignore();
    }

    fatCalories = fatGrams * 9;
    if (fatCalories > calories){
        cout << "There are more calories from fat than calories entered, please recheck your input and try again";
        return 0;
    }

    fatCalPercent = fatCalories * 100 / calories;

    if (fatCalories < calories * 0.30){
        isLowFat = true;
    }

    cout << "Out of " << calories << " calories, " << fatCalories << " of them came from fat." << endl;
    cout << "That's " << fatCalPercent << " percent. ";

    if (isLowFat){
        cout << "This food is considered low fat." << endl;
    }
    return 0;
}*/




/*
    int month, year, daysInMonth;
    bool isLeapYear;
    cout << "Enter a month (1-12): ";
    cin >> month;

    cout << "Enter a year: ";\
    cin >> year;

    if (year % 100 == 0 && year % 400 == 0){
        isLeapYear = true;
    } else if (year % 4 == 0) {
        isLeapYear = true;
    }

    switch (month){
        case 1:
            daysInMonth = 31;
            break;
        case 2:
            daysInMonth = 28;
            break;
        case 3:
            daysInMonth = 31;
            break;
        case 4:
            daysInMonth = 30;
            break;
        case 5:
            daysInMonth = 31;
            break;
        case 6:
            daysInMonth = 30;
            break;
        case 7:
            daysInMonth = 31;
            break;
        case 8:
            daysInMonth = 31;
            break;
        case 9:
            daysInMonth = 30;
            break;
        case 10:
            daysInMonth = 31;
            break;
        case 11:
            daysInMonth = 30;
            break;
        case 12:
            daysInMonth = 31;
            break;
        default:
            cout << "Invalid month entered" << endl;
    }
    if (isLeapYear){
        daysInMonth++;
    }
    cout << daysInMonth << " days";

    return 0;
}
 */