//Charles Dodge
//CIST 2361 45385
//Lab_2
#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    double actualValue, assessmentValue, propertyTax;

    cout << "What is the actual value for a piece of property? ";
    cin >> actualValue;

    //assessment Value is 60% of actual
    assessmentValue = actualValue * 0.60;

    //Property tax is 0.75 per 100
    propertyTax = (assessmentValue / 100) * 0.75;

    cout << "Assessment value is " << assessmentValue << endl;
    cout << "Property tax is " << propertyTax << endl;


    return 0;
}



/*
    string month;
    double totalSales, sales, countyTax, stateTax, totalSalesTax;

    cout << "Enter current month: ";
    cin >> month;

    cout << "Enter total sales number: ";
    cin >> totalSales;

    sales = totalSales / 1.06;
    totalSalesTax = totalSales - sales;
    //county tax is 33% of totalSalesTax
    countyTax = totalSalesTax * 0.333333;
    //State tax is 66% of totalSalesTax
    stateTax = totalSalesTax * 0.666666;

    cout << "Month: " << month << endl;
    cout << "--------------------" << endl;
    cout << setprecision(2) << fixed;
    cout << left << setw(20) << "Total Collected: " << "$ " << right << setw(10) << totalSales << endl;
    cout << left << setw(20) << "Sales: " << "$ " << right << setw(10) << sales << endl;
    cout << left << setw(20) << "County Sales Tax: " << "$ " << right <<setw(10) << countyTax << endl;
    cout << left << setw(20) << "State Sales Tax: " << "$ " << right << setw(10) << stateTax << endl;
    cout << left << setw(20) << "Total Sales Tax: " << "$ " << right << setw(10) << totalSalesTax << endl;

    return 0;
}

*/