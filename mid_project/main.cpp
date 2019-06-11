//Charles Dodge
//CIST 2310 CRN 45385
//Midterm Project
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    //Set to 2 decimal places
    cout << fixed << setprecision(2);
    double initialLoanAmount = 0;
    double loanLeft = 0;
    double interestRateYear = 0;
    double interestRateMonth = 0;
    double monthlyPayment = 0;
    double interestAmount = 0;
    double actualPayment = 0;
    double loanAmountBeforeLastPayment = 0;
    double lastAmountPaid = 0;
    double totalInterest = 0;
    int monthsToPay = 0;

    cout << "Enter loan amount: ";
    cin >> initialLoanAmount;
    loanLeft = initialLoanAmount;

    cout << "Enter interest rate per year as percentage (e.g. 7.2): ";
    cin >> interestRateYear;

    //convert yearly interest into monthly, and decimal
    interestRateMonth = interestRateYear / 12 / 100;

    double minimumMonthlyPayment = loanLeft * interestRateMonth + 0.01; //Have to pay at least a cent

    cout << "The minimum monthly payment is " << minimumMonthlyPayment << endl;
    cout << "Enter monthly payment: ";
    cin >> monthlyPayment;

    if (monthlyPayment < minimumMonthlyPayment) {
        cout << "Your monthly payment is too low, you will never pay off your loan.";
        return 0;
    }

    while (loanLeft > 0) {
        //Interest Gains
        interestAmount = loanLeft * interestRateMonth;
        totalInterest += interestAmount;
        //How much of the monthly goes towards the principal
        actualPayment = monthlyPayment - interestAmount;

        if (loanLeft - actualPayment < 0) {
            loanAmountBeforeLastPayment = loanLeft;
            lastAmountPaid = loanLeft + interestAmount;
        }
        loanLeft -= actualPayment;
        monthsToPay++;
    }

    cout << "With a monthly payment of $" << monthlyPayment << ", it will take you " << monthsToPay
         << " months to pay off $" << initialLoanAmount << " at " << interestRateYear << "% interest." << endl;

    if (loanAmountBeforeLastPayment > 0) {
        cout << "Your last amount owed will be $" << loanAmountBeforeLastPayment
             << " and your final monthly payment will be $"  << lastAmountPaid << endl;
    }

    cout << "You will have paid $" << totalInterest << " in interest.";
    return 0;
}

/*
int main() {
    double payRate, hoursWorked, preTax, postTax, moneyLeft, accessories, schoolSupplies, savingsBonds, parentsSavingsBonds = 0;
    double incomeTaxRate = 0.14;

    cout << "How much do you make in an hour for your summer job? ";
    cin >> payRate;
    cout << "How many hours did you work? ";
    cin >> hoursWorked;

    preTax = payRate * hoursWorked;
    postTax = preTax - (preTax * incomeTaxRate);
    moneyLeft = postTax;


    accessories = moneyLeft * 0.10; //10% on accessories
    schoolSupplies = moneyLeft * 0.01; //1% on school supplies

    //Money after spending on school and accessories
    moneyLeft -= (accessories + schoolSupplies);

    savingsBonds = moneyLeft * 0.25; //25% of remaining on savings bonds

    if (savingsBonds == 0) {
        parentsSavingsBonds = moneyLeft * 0.01; //If nothing spent on savings bonds, parents spend 1%
    } else if (savingsBonds <= postTax * 0.25) {
        parentsSavingsBonds = static_cast<int>(savingsBonds) * 0.25; //Parents spend 0.25 per dollar spent
        parentsSavingsBonds += postTax * 0.01;                        //Plus 1% saved
    } else if (savingsBonds > postTax * 0.25) {
        parentsSavingsBonds = static_cast<int>(savingsBonds) * 0.40; //Parents spend 0.40 per dollar spent
        parentsSavingsBonds += postTax * 0.02;                        //Plus 2% saved
    }

    cout << "Income before taxes: " << preTax << endl;
    cout << "Income after taxes: " << postTax << endl;
    cout << "Money spent on clothes and accessories: " << accessories << endl;
    cout << "Money spent on school supplies: " << schoolSupplies << endl;
    cout << "Money spent on Savings Bonds: " << savingsBonds << endl;
    cout << "Money parents spent on Savings Bonds: " << parentsSavingsBonds << endl;
    return 0;
}
*/