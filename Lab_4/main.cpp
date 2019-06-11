//Charles Dodge
//CIST 2361 CRN 45385
//Lab_4
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long int seconds;

    cout << "Enter a number of seconds: ";
    cin >> seconds;

    if (seconds >= 60){
        cout << "There are " << (seconds / 60) << " minutes in " << seconds << " seconds. " << endl;

        if (seconds >= 3600){
            cout << "There are " << (seconds / 3600) << " hours in " << seconds << " seconds. " << endl;

            if (seconds >= 86400) {
                cout << "There are " << (seconds / 86400) << " days in " << seconds << " seconds. " << endl;
            }
        }
    } else {
        cout << "That's not a very long time.";
    }

    return 0;
}




/*
    double BMI ,weight, height;

    cout << "Enter your height (in inches): ";
    cin >> height;

    cout << "Enter your weight (in pounds): ";
    cin >> weight;

    BMI = weight * 703 / pow(height, 2);

    if (BMI < 18.5) {
        cout << "You're considered underweight";
    } else if (BMI < 25) {
        cout << "You're considered to have an optimal BMI";
    } else {
        cout << "You're considered overweight";
    }
    return 0;
 */