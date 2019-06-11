//Charles Dodge
//CIST 2361 CRN 45385
//Lab_7
#include <iostream>
using namespace std;

int getNumAccidents(string);
void findLowest(int, int, int, int, int);
int main() {
    int northNumber, eastNumber, southNumber, westNumber, centralNumber;
    northNumber = getNumAccidents("North");
    eastNumber = getNumAccidents("East");
    southNumber = getNumAccidents("South");
    westNumber = getNumAccidents("West");
    centralNumber = getNumAccidents("Central");

    cout << endl;

    findLowest(northNumber, eastNumber, southNumber, westNumber, centralNumber);
    return 0;
}

int getNumAccidents (string region) {
    cout << "Enter number of automobile accidents for " << region << " region for last year: ";
    int numAccidents;
    cin >> numAccidents;

    while (numAccidents < 0) {
        cout << "Number of accidents must be greater than 0: ";
        cin >> numAccidents;
    }

    return numAccidents;
}

void findLowest (int north, int east, int south, int west, int central) {
    if (north < east && north < south && north < west && north < central) {
        cout << "North was the region with the lowest number of automobile accidents last year with " << north;
    } else if (east < south && east < west && east < central) {
        cout << "East was the region with the lowest number of automobile accidents last year with " << east;
    } else if (south < west && south < central) {
        cout << "South was the region with the lowest number of automobile accidents last year with " << south;
    } else if (west < central){
        cout << "West was the region with the lowest number of automobile accidents last year with " << west;
    } else {
        cout << "Central was the region with the lowest number of automobile accidents last year with " << central;
    }
}

/*
double getSales(string);

void findHighest(double, double, double, double);

int main() {
    double divOneSales, divTwoSales, divThreeSales, divFourSales;
    divOneSales = getSales("Northeast");
    divTwoSales = getSales("Southeast");
    divThreeSales = getSales("Northwest");
    divFourSales = getSales("Southwest");

    cout << endl;

    findHighest(divOneSales, divTwoSales, divThreeSales, divFourSales);
    return 0;
}

double getSales(string divName) {
    cout << "Enter quarterly sales amount for " << divName << " division: ";
    double salesAmount;
    cin >> salesAmount;

    while (salesAmount < 0) {
        cout << "Sales amount must be greater than 0: ";
        cin >> salesAmount;
    }
    return salesAmount;

}

void findHighest(double first, double second, double third, double fourth) {
    if (first > second && first > third && first > fourth) {
        cout << "Highest grossing division was Northeast with quarterly sales of $" << first << endl;
    } else if (second > third && second > fourth) {
        cout << "Highest grossing division was Southeast with quarterly sales of $" << second << endl;
    } else if (third > fourth) {
        cout << "Highest grossing division was Northwest with quarterly sales of $" << third << endl;
    } else {
        cout << "Highest grossing division was Southwest with quarterly sales of $" << fourth << endl;
    }
}
 */