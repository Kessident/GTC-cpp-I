//Charles Dodge
//CIST 2361 CRN 45385
//Lab_10
#include <iostream>

using namespace std;
int linearSearch(int[], int, int);
int binarySearch(int[], int, int);

const int MAIN_ARRAY_SIZE = 27;
int MAIN_ARRAY[MAIN_ARRAY_SIZE] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27};
int main() {
    int inputNum;
    cout << "Enter a number between 1 and 27 to search for: ";
    cin >> inputNum;

    int linearSearchNum = linearSearch(MAIN_ARRAY, MAIN_ARRAY_SIZE, inputNum);
    int binarySearchNum = binarySearch(MAIN_ARRAY, MAIN_ARRAY_SIZE, inputNum);

    cout << "Using a linear search it took " << linearSearchNum << " comparisons to find " << inputNum << "." << endl;
    cout << "Using a binary search it took " << binarySearchNum << " comparisons to find " << inputNum << "." << endl;

    return 0;
}

int linearSearch(int array[], int size, int searchFor){
    int searchesTaken = 0;
    bool found = false;
    for (int i = 0 ; i < size; i ++){
        if (!found){
            searchesTaken++;
        }
        if (array[i] == searchFor) {
            found = true;
        }
    }
    return searchesTaken;
}

int binarySearch(int array[], int size, int searchFor){
    int searchesTaken = 0;
    int first = 0,
        last = size - 1,
        middle;
    bool found = false;

    while (!found && first <= last) {
        middle = (first + last) / 2;
        if (array[middle] == searchFor) {
            found = true;
        } else if (array[middle] > searchFor) {
            last = middle - 1;
        } else {
            first = middle + 1;
        }

        searchesTaken++;
    }
    return searchesTaken;
}

/*const int chargeAccountList[] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                                8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                                1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
int main() {
    int inputNum;
    cout << "Enter an account number: ";
    cin >> inputNum;

    for (int num : chargeAccountList){
        if (inputNum == num) {
            cout << "This is a valid account number";
            return 0;
        }
    }

    cout << "That is not a valid account number";
    return 0;
}*/