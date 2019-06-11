//Charles Dodge
//CIST 2361 CRN 45385
//Lab_9
#include <iostream>

using namespace std;
const int TEST_QUESTION_LENGTH = 20;

int main() {
    string correctAnswers[] = {"A", "D", "B", "B", "C", "B", "A", "B", "C", "D", "A", "C", "D", "B", "D", "C", "C", "A", "D", "B"};
    string studentAnswers[TEST_QUESTION_LENGTH];
    cout << R"(Valid inputs are "A", "B", "C", "D")" << endl;
    for (int i = 0; i < TEST_QUESTION_LENGTH; i++) {
        cout << "Enter student's answer for question " << (i + 1) << ": ";
        cin >> studentAnswers[i];
        while (studentAnswers[i] != "A" && studentAnswers[i] != "B" && studentAnswers[i] != "C" &&
               studentAnswers[i] != "D") {
            cout << R"(Valid inputs are "A", "B", "C", "D")" << ": ";
            cin >> studentAnswers[i];
        }
    }

    int numCorrect = 0;
    int numIncorrect = 0;
    for (int i = 0; i < TEST_QUESTION_LENGTH; i++) {
        if (studentAnswers[i] == correctAnswers[i]) {
            numCorrect++;
        } else {
            numIncorrect++;
        }
    }
    cout << endl;
    cout << (numCorrect >= 15 ? "Passed" : "Failed") << endl;
    cout << "The student got " << numCorrect << " answers correct and "
         << numIncorrect << " answers incorrect." << endl;


    if (numIncorrect > 0) {
        int count = 0;
        int incorrectQuestions[numIncorrect];

        for (int i = 0; i < TEST_QUESTION_LENGTH; i++) {
            if (studentAnswers[i] != correctAnswers[i]) {
                incorrectQuestions[count] = (i + 1);
                count++;
            }
        }
        cout << "The list of question number the student got wrong are: ";
        for (int i = 0; i < numIncorrect; i++) {
            cout << incorrectQuestions[i] << " ";
        }
    }

    return 0;
}



/*
int main() {
    string salsaNames[] = {
            "mild",
            "medium",
            "sweet",
            "hot",
            "zesty"};
    int salsaSales[5];

    for (int i = 0; i < 5; i++){
        cout << "Enter numbers of jars of " << salsaNames[i] << " salsa sold: ";
        cin >> salsaSales[i];
        while (salsaSales[i] < 0) {
            cout << "jars sold cannot be negative: ";
            cin >> salsaSales[i];
        }
    }

    cout << endl;

    int totalSold = 0;
    for (int i = 0; i < 5; ++i) {
        cout << salsaSales[i] << " jars of " << salsaNames[i] << " salsa sold." << endl;
        totalSold += salsaSales[i];
    }
    cout << totalSold << " total jars of salsa sold." << endl;

    int bestSellingNum = salsaSales[0];
    int worstSellingNum = salsaSales[0];
    string bestSellingName = salsaNames[0];
    string worstSellingName = salsaNames[0];

    for (int i = 1; i < 5; ++i) {
        if (salsaSales[i] > bestSellingNum) {
            bestSellingNum = salsaSales[i];
            bestSellingName = salsaNames[i];
        } else if (salsaSales[i] < worstSellingNum) {
            worstSellingNum = salsaSales[i];
            worstSellingName = salsaNames[i];
        }
    }

    cout << bestSellingName << " salsa was the best selling with " << bestSellingNum << " jars sold." << endl;
    cout << worstSellingName << " salsa was the worst selling with " << worstSellingNum << " jars sold." << endl;


    return 0;
}*/