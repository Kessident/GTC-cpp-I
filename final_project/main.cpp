//Charles Dodge
//CIST 2361 - CRN 45385
//Final Project
#include <iostream>
#include <fstream>

using namespace std;

void readInputData(string[], int[5][7], string);
void averageRunnerData(int, string[], int[5][7]);
int main(){
    string runnerNames[5];
    int runnerDistances[5][7];

    readInputData(runnerNames, runnerDistances, "InputData.txt");

    for (int i = 0; i < 5; i++){
        averageRunnerData(i, runnerNames, runnerDistances);
    }
}

void readInputData(string runnerNames[5], int runnerDistances[5][7], string inputFile){
    ifstream inputData;
    inputData.open(inputFile);

    for (int numRunner = 0; numRunner < 5; numRunner++) {
        inputData >> runnerNames[numRunner];
        for (int day = 0; day < 7; day++){
            inputData >> runnerDistances[numRunner][day];
        }
    }
}

void averageRunnerData(int i, string runnerNames[], int runnerDistances[5][7]){
    double totalMilesRun = 0, averageMilesRun = 0;
    string runnerName = runnerNames[i];

    //Sum Miles
    for (int miles : runnerDistances[i]){
        totalMilesRun += miles;
    }
    //Average, 7 days in week
    averageMilesRun = totalMilesRun / 7.0;

    cout << runnerName << " ran a total of " << totalMilesRun << " miles, with an average of "
    << averageMilesRun << " miles ran." << endl;
}





/*
void centerInfo();
void getPrices(double&, double&);
void getInfo(bool&, bool&, bool&, int&, int&);
void calcTotalCost(bool&, bool&, bool&, int&, int&, double&, double&);
int main() {
    int menuSelection = 0;
    bool isSenior,
        boughtFivePrivateSessions,
        paidYearly;
    int numMembershipMonths,
        numPersonalTrainingSessions;
    double monthlyMembershipCost,
            personalTrainingSessionCost,
            totalCost;
    cout << "Welcome to the fitness center's interactive membership calculator." << endl << endl;
    do {
        cout << "For general information, enter 1" << endl
             << "To input current prices, enter 2" << endl
             << "To input your information, enter 3" << endl
             << "To calculate membership cost, enter 4" << endl
             << "To exit, enter 0" << endl;
        cin >> menuSelection;
        switch (menuSelection) {
            case 1 : centerInfo();
                break;
            case 2 : getPrices(monthlyMembershipCost, personalTrainingSessionCost);
                break;
            case 3 : getInfo(isSenior, boughtFivePrivateSessions, paidYearly, numMembershipMonths, numPersonalTrainingSessions);
                break;
            case 4 : calcTotalCost(isSenior, boughtFivePrivateSessions, paidYearly, numMembershipMonths, numPersonalTrainingSessions, monthlyMembershipCost, personalTrainingSessionCost);
                break;
            default: break;
        }
    } while (menuSelection != 0);
    return 0;
}

void centerInfo(){
    cout << "This program determines the cost of a new membership." << endl
        << "Senior citizens get a 30% discount" << endl
        << "Buying a yearly memberships discounts 15%" << endl
        << "buying 5 or more private training sessions gets 20% discount off EACH session" << endl << endl;
}

void getPrices(double& monthlyMembershipCost, double& personalTrainerSessionCost){
    cout << "Enter cost for a month of membership: ";
    cin >> monthlyMembershipCost;
    while (monthlyMembershipCost < 0){
        cout << "Membership cost must be positive: ";
        cin >> monthlyMembershipCost;
    }

    cout << "Enter cost for one private training session: ";
    cin >> personalTrainerSessionCost;
    while (personalTrainerSessionCost < 0){
        cout << "Personal session cost must be positive: ";
        cin >> personalTrainerSessionCost;
    }
    cout << endl;
};

void getInfo(bool& isSenior, bool& boughtFivePrivateSessions, bool& paidYearly, int& numMembershipMonths, int& numPersonalTrainingSessions) {
    char seniorCheck;
    cout << "Are you a senior citizen (Y/N): ";
    cin >> seniorCheck;
    isSenior = seniorCheck == 'Y' || seniorCheck == 'y';

    cout << "How many months of membership have you bought? ";
    cin >> numMembershipMonths;
    paidYearly = numMembershipMonths >= 12;

    cout << "How many personal training sessions have you bought? ";
    cin >> numPersonalTrainingSessions;
    boughtFivePrivateSessions = numPersonalTrainingSessions >= 5;

    cout << endl;
};

void calcTotalCost(bool& isSenior, bool& boughtFivePrivateSessions, bool& paidYearly, int& numMembershipMonths, int& numPersonalTrainingSessions, double& monthlyMembershipCost, double& personalTrainingSessionCost){
    double totalCost = 0,
            totalMembershipCost,
            totalTrainingSessionCost;

    totalMembershipCost = numMembershipMonths * monthlyMembershipCost;
    if (paidYearly) {
        //15% discount for buying yearly
        totalMembershipCost -= totalMembershipCost * 0.15;
    }
    if (isSenior) {
        //30% discount for seniors
        totalMembershipCost -= totalMembershipCost * 0.30;
    }

    totalTrainingSessionCost = numPersonalTrainingSessions * personalTrainingSessionCost;
    if (boughtFivePrivateSessions) {
        //20% discount if bought at least 5 sessions
        totalTrainingSessionCost -= totalTrainingSessionCost * 0.20;
    }

    totalCost = totalMembershipCost + totalTrainingSessionCost;
    cout << "Total cost for you today is $" << totalCost << endl << endl;
};*/






/*

const int LOW_INCOME_THRESHOLD = 25000;
double calcBillingAmount(double, int, bool);
int main() {
    double hourlyRate;
    int totalConsultingTime;
    bool isLowIncome;
    char lowIncome;

    cout << "Please enter the hourly rate: ";
    cin >> hourlyRate;
    while (hourlyRate < 0){
        cout << "Hourly rate must be a positive number: ";
        cin >> hourlyRate;
    }

    cout << "Please enter total consulting time in minutes: ";
    cin >> totalConsultingTime;
    while (totalConsultingTime <= 0){
        cout << "Consulting time must be greater than 0";
        cin >> totalConsultingTime;
    }

    cout << "Is the individual considered low income? (<=$" << LOW_INCOME_THRESHOLD << ") (Y/N): ";
    cin >> lowIncome;
    while (lowIncome != 'Y' && lowIncome != 'y') {
        cout << "Please enter either 'Y' or 'N': ";
        cin >>lowIncome;
    }
    if (lowIncome == 'Y' || lowIncome == 'y'){
        isLowIncome = true;
    } else {
        isLowIncome = false;
    }

    double totalBillingAmount = calcBillingAmount(hourlyRate, totalConsultingTime, isLowIncome);
    cout << "Total billing amount is $" << totalBillingAmount;
    return 0;
}

double calcBillingAmount (double hourly, int consultingTime, bool isLowIncome){
    //low income individuals get 30 minutes free, after that billing time is 40% normal
    const int LOW_INCOME_CONSULT_NO_CHARGE = 30;
    const double LOW_INCOME_CONSULT_FEE = 0.40;
    //non low income individuals get 20 minutes free, after that billing time is 70% normal
    const int REG_INCOME_CONSULT_NO_CHARGE = 20;
    const double REG_INCOME_CONSULT_FEE = 0.70;
    double billingAmount = 0;

    if (isLowIncome) {
        if (consultingTime <= LOW_INCOME_CONSULT_NO_CHARGE) {
            billingAmount = 0;
        } else {
            consultingTime -= LOW_INCOME_CONSULT_NO_CHARGE;

            billingAmount = hourly * LOW_INCOME_CONSULT_FEE * (consultingTime / 60.0);
        }
    } else {
        if (consultingTime <= REG_INCOME_CONSULT_NO_CHARGE) {
            billingAmount = 0;
        } else {
            consultingTime -= REG_INCOME_CONSULT_NO_CHARGE;

            billingAmount = hourly * REG_INCOME_CONSULT_FEE * (consultingTime / 60.0);
        }
    }
    return billingAmount;
}*/