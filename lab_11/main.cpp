//Charles Dodge
//CIST 2361 45385
//Lab_11
#include <iostream>
using namespace std;


int* arrayAllocate(int);
void sortArray(int[], int size);
double averageArray(int[], int);
int main() {
    int testScoreSize;
    cout << "How many test scores are there? ";
    cin >> testScoreSize;

    int testScores[testScoreSize];
    int* testScorePtr = testScores;
    for (int i = 0; i < testScoreSize; i++){
        cout << "Enter test score " << (i+1) << ":";
        cin >> *testScorePtr;
        while (*testScorePtr < 0){
            cout << "Test scores cannot be negative: " << *testScorePtr;
            cin >> *testScorePtr;
        }
        testScorePtr++;
    }
    testScorePtr = testScores;

    sortArray(testScorePtr, testScoreSize);

    double averageScore = averageArray(testScores, testScoreSize);

    cout << "Average score: " << averageScore << endl;
    cout << "Sorted scores: ";
    for (int i = 0; i < testScoreSize; i++){
        cout << *testScorePtr++ << " ";
    }

    return 0;
}

void sortArray(int arrayToSort[], int arraySize){
    int minIndex, minValue;

    for (int i = 0; i < arraySize-1; i++){
        minIndex = i;
        minValue = arrayToSort[i];
        for (int j = i+1; j < arraySize; j++) {
            if (arrayToSort[j] < minValue){
                minValue = arrayToSort[j];
                minIndex = j;
            }
        }
        swap(arrayToSort[minIndex], arrayToSort[i]);
    }
}

double averageArray(int array[], int size){
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    double average = sum / size;
    return average;
}


////Charles Dodge
////CIST 2361 45385
////Lab_11
//#include <iostream>
//using namespace std;
//
//
//int* arrayAllocate(int);
//void sortArray(int[], int size);
//double averageArray(int[], int);
//int main() {
//    int testScoreSize;
//    cout << "How many test scores are there? ";
//    cin >> testScoreSize;
//
//    int* testScores = arrayAllocate(testScoreSize);
//
//    for (int i = 0; i < testScoreSize; i++){
//        cout << "Enter test score " << (i+1) << ":";
//        cin >> testScores[i];
//        while (testScores[i] < 0){
//            cout << "Test scores cannot be negative: " << testScores[i];
//            cin >> testScores[i];
//        }
//    }
//
//    sortArray(testScores, testScoreSize);
//
//    double averageScore = averageArray(testScores, testScoreSize);
//
//    cout << "Average score: " << averageScore << endl;
//    cout << "Sorted scores: ";
//    for (int i = 0; i < testScoreSize; i++){
//        cout << testScores[i] << " ";
//    }
//
//    return 0;
//}
//
//int* arrayAllocate (int arraySize){
//    int newArray[arraySize];
//    return newArray;
//}
//
//void sortArray(int arrayToSort[], int arraySize){
//    int minIndex, minValue;
//
//    for (int i = 0; i < arraySize-1; i++){
//        minIndex = i;
//        minValue = arrayToSort[i];
//        for (int j = i+1; j < arraySize; j++) {
//            if (arrayToSort[j] < minValue){
//                minValue = arrayToSort[j];
//                minIndex = j;
//            }
//        }
//        swap(arrayToSort[minIndex], arrayToSort[i]);
//    }
//}
//
//double averageArray(int array[], int size){
//    double sum = 0;
//    for (int i = 0; i < size; ++i) {
//        sum += array[i];
//    }
//    double average = sum / size;
//    return average;
//}