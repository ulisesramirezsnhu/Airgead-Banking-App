#include <iostream>
#include <iomanip>

using namespace std;

#include "calculateBalance.h"





//function to display info without monthly deposits
void noMonthlyPayment(int years, double Interest, double amount){
    //holds the total amount
    double totalAmount = amount;

    cout << "\nBalance and Interest Without Additional Monthly Deposits"<<endl;
    cout << "=============================================================="<<endl;
    cout << "Year\t\tYear End Balance\tYear End Earned Interest"<<endl;
    cout << "--------------------------------------------------------------"<<endl;
    //loop to calculate the total
    for(int i=0; i<years ;i++){
        amount = (totalAmount) * ((Interest/100));
        totalAmount = totalAmount + amount;
        //prints the calculation within 2 decimal points
        cout << (i+1) << "\t\t" << fixed << setprecision(2) << totalAmount << "\t\t\t" << amount << endl;
    }
    cout<<endl<<endl;
}




//function to display info with monthly deposits
void monthlyPayment(int years, double Interest, double amount, double monthlyDeposit){
    //holds the total amount
    double totalAmount = amount;

    cout << "\nBalance and Interest With Additional Monthly Deposits"<<endl;
    cout << "=============================================================="<<endl;
    cout << "Year\t\tYear End Balance\tYear End Earned Interest"<<endl;
    cout << "--------------------------------------------------------------"<<endl;
    for(int i=0; i<years ;i++){
        //Variable to store yearly interest
        double yearlyInterest = 0.0;
        //loop to calculate the total
        for(int j=0; j<12; j++){
        amount = (totalAmount + monthlyDeposit) * ((Interest/100)/12);
        yearlyInterest = yearlyInterest + amount;
        totalAmount = totalAmount + monthlyDeposit + amount;
        }
    //prints the calculation within 2 decimal points
    cout << (i+1) << "\t\t" << fixed << setprecision(2) << totalAmount << "\t\t\t" << yearlyInterest << endl;
    }
    cout<<endl<<endl;
}



int main(){
calculateBalance account1;
// Variables
double interest,monthly,startammt;
int yearnum;


//Display info to user
cout << "*************************"<<endl;
cout << "********Data Input*******"<<endl;
cout << "Initial Investment Amount: "<<endl;
cout << "Monthly Deposit: "<<endl;
cout << "Annual Interest: "<<endl;
cout << "Number of years: "<<endl;
//pauses the system
system("PAUSE");
cout<<endl<<endl;

//Get info from user
cout << "*************************"<<endl;
cout << "********Data Input*******"<<endl;
cout << "Initial Investment Amount: $";
cin >> startammt;
cout << "\nMonthly Deposit: $";
cin >> monthly;
cout << "\nAnnual Interest: %";
cin >> interest;
cout << "\nNumber of years: ";
cin >> yearnum;
//pauses the system
system("PAUSE");
cout<<endl<<endl;



// calls class to store the first item info
account1.Setyears(yearnum);
account1.SetStartAmount(startammt);
account1.SetmonthlyDeposit(monthly);
account1.SetyearlyInterest(interest);


//Calls function to do calculations and print them out
noMonthlyPayment(account1.Getyears(),account1.GetyearlyInterest(),account1.GetStartAmount());
monthlyPayment(account1.Getyears(),account1.GetyearlyInterest(),account1.GetStartAmount(),account1.GetmonthlyDeposit());


}
