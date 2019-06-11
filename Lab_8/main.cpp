//Charles Dodge
//CIST 2361 CRN 45385
//Lab_7
#include <iostream>

using namespace std;

void getStockInfo(int &, int &, double &);
void displayInfo(int, int, double);

int main() {
    int spoolsOrdered = 0, spoolsInStock = 0;
    double specialCharges = 0;
    getStockInfo(spoolsOrdered, spoolsInStock, specialCharges);

    displayInfo(spoolsOrdered, spoolsInStock, specialCharges);
    return 0;
}

void getStockInfo(int &spoolsOrdered, int &spoolsInStock, double &specialCharges) {
    cout << "Enter number of spools ordered: ";
    cin >> spoolsOrdered;
    while (spoolsOrdered < 1) {
        cout << "At least one spool must be ordered: ";
        cin >> spoolsOrdered;
    }

    cout << "How many spools are in stock?: ";
    cin >> spoolsInStock;
    while (spoolsInStock < 0) {
        cout << "There cannot be negative spools in stock: ";
        cin >> spoolsInStock;
    }

    cout << "Enter special shipping and handling charges (per spool). If none, enter 0: ";
    cin >> specialCharges;
    while (specialCharges < 0) {
        cout << "Enter special shipping and handling charges (per spool). If none, enter 0: ";
        cin >> specialCharges;
    }
}

void displayInfo(int spoolsOrdered, int spoolsInStock, double specialCharges) {
    int spoolsReadyToShip = spoolsOrdered <= spoolsInStock ? spoolsOrdered : spoolsInStock;
    int spoolsBackordered = spoolsOrdered > spoolsInStock ? spoolsOrdered - spoolsInStock : 0;
    double subtotalForReady = spoolsReadyToShip * 100.0;
    double shippingCostForReady = spoolsReadyToShip * 10.0;
    shippingCostForReady += specialCharges * spoolsReadyToShip;
    double totalcostReady = subtotalForReady + shippingCostForReady;

    cout << "There are " << spoolsReadyToShip << " spools ready to ship from current stock." << endl;
    if (spoolsBackordered > 0) {
        cout << "There are " << spoolsBackordered << " spools backordered." << endl;
    }
    cout << "Subtotal: $" << subtotalForReady << endl;
    cout << "Total shipping and handling charges: $" << shippingCostForReady << endl;
    cout << "Total cost for the spools ready to ship is: $" << totalcostReady;
}

/*
void getScore(int&);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main() {
    int score1, score2, score3, score4, score5;
    getScore(score1);
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);

    calcAverage(score1, score2, score3, score4, score5);
    return 0;
}

void getScore(int& score) {
    cout << "Enter a test score: ";
    cin >> score;
    while (score > 100 || score < 0) {
        cout << "Score must be between 0 and 100: ";
        cin >> score;
    }
}

void calcAverage(int score1, int score2, int score3, int score4, int score5){
    int lowest = findLowest(score1, score2, score3, score4, score5);
    int sum = score1 + score2 + score3 + score4 + score5 - lowest;
    double average = sum / 4.0;

    cout << "The average of "
    << score1 << ", "
    << score2 << ", "
    << score3 << ", "
    << score4 << ", "
    << score5 << ", " << "with the lowest score of " << lowest << " dropped is " << average;
}

int findLowest(int score1, int score2, int score3, int score4, int score5) {
    return min({score1, score2, score3, score4, score5});
}*/