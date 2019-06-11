
//Charles Dodge
//CIST 2361 45385
//Classwork Lesson 6
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
void someFunctionName();

int main() {
    const int SIZE = 5;
    double x[SIZE] {1,1,1,1,1};
    for (int i = 2; i < SIZE; i++){
        x[i] = 0.0;
    }

    for (double num : x){
        cout << num << endl;
    }

}

void someFunctionName (){
cout << "Words";
}

    /*
    int firstNum, secondNum;
    //firstNum < secondNum;
    cout << "Enter two numbers separated by a space. The first number must be less than the second: ";
    cin >> firstNum;
    cin >> secondNum;
    cin.ignore();

    while (firstNum >= secondNum) {
        cout << "The first number must be less than the second number. Enter again: ";
        cin >> firstNum;
        cin >> secondNum;
        cin.ignore();
    }


//Odd Numbers
    cout << "Odd numbers between your two numbers: " << endl;
    for (int i = firstNum; i <= secondNum; i++) {
        if (i % 2 == 1) {
            cout << i << endl;
        }
    }

//Sum evens
    int sum = 0;
    for (int i = 0; i <= secondNum; ++i) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    cout << endl << "Sum of all evens between your two numbers: " << sum << endl << endl;

//Numbers and squares
    cout << "List of all numbers and their squares: " << endl;
    for (int i = 0; i <= secondNum; ++i) {
        cout << "Number: " << i << " Square: " << pow(i, 2) << endl;
    }

//Sum squares of odds
    sum = 0;
    for (int i = 0; i <= secondNum; ++i) {
        if (i % 2 == 1) {
            sum += pow(i, 2);
        }
    }
    cout << endl << "Sum of the square of the odd numbers between your two numbers is: " << sum << endl;
    return 0;
}
*/



/*
//Charles Dodge
//CIST 2361 45385
//Classwork Lesson 4
#include <iostream>
using namespace std;

int main(){

    const int MAX_BOX_CAPACITY = 24;
    const int MAX_CONTAINER_CAPACITY = 75;

    int cookies, boxCapacity, containerCapacity;
    int extraCookies = 0, extraBoxes = 0, boxesNeeded, containersNeeded;

    cout << "Enter number of cookies: ";
    cin >> cookies;

    cout << "Enter number of cookies per box: ";
    cin >> boxCapacity;
    while (boxCapacity > MAX_BOX_CAPACITY){
        cout << "Boxes can only contain a maximum of "<< MAX_BOX_CAPACITY << " cookies, please enter a smaller number: ";
        cin >> boxCapacity;
    }


    cout << "Enter number of boxes per container: ";
    cin >> containerCapacity;
    while (containerCapacity > MAX_CONTAINER_CAPACITY){
        cout << "Containers can only contain a maximum of " << MAX_CONTAINER_CAPACITY << " boxes of cookies, please enter a smaller number: ";
        cin >> containerCapacity;
    }

    boxesNeeded = cookies / boxCapacity;
    extraCookies = cookies % boxCapacity;

    containersNeeded = boxesNeeded / containerCapacity;
    extraBoxes = boxesNeeded % containerCapacity;

    cout << "You need " << containersNeeded << " containers holding "<< containerCapacity << " boxes each to ship ";
    cout << boxesNeeded << " boxes of cookies holding " << boxCapacity << " cookies each." << endl;

    if (extraBoxes > 0){
        cout << "There are " << extraBoxes << " leftover boxes after filling all containers to capacity" << endl;
    } else {
        cout << "There are no leftover boxes." << endl;
    }
    if (extraCookies > 0) {
        cout << "There are " << extraCookies << " leftover cookies after filling all boxes to capacity";
    } else {
        cout << "There are no leftover cookies." << endl;
    }
    return 0;
}
*/



/*
//Charles Dodge
//CIST 2361 45385
//Classwork Lesson 2
#include <iostream>

int main() {

    double num1, num2, num3, num4, num5, sum, average;
    num1 = 28;
    num2 = 32;
    num3 = 37;
    num4 = 24;
    num5 = 33;

    sum = num1 + num2 + num3 + num4 + num5;

    average = sum / 5;

    std::cout << "Average of: " << num1 ;
    std::cout << ", " << num2 ;
    std::cout << ", " << num3 ;
    std::cout << ", " << num4 ;
    std::cout << ", and " << num5 ;
    std::cout << " is : " << average;

    return 0;
}
*/