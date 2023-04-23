#include <iostream>
using namespace std;

#include "calculateBalance.h"
// serves as a placeholder or testing
calculateBalance::calculateBalance() {
   startAmount = 0;
   monthlyDeposit = 0;
   yearlyInterest = 0;
   years = 0;
}

// when these functions are called it sets the details to the item


void calculateBalance::Setyears(int year) {
   years = year;
}

void calculateBalance::SetStartAmount(double startAmounts) {
   startAmount = startAmounts;
}

void calculateBalance::SetmonthlyDeposit(double monthlyDeposits) {
   monthlyDeposit = monthlyDeposits;
}

void calculateBalance::SetyearlyInterest(double yearlyInterests) {
   yearlyInterest = yearlyInterests;
}




// when these functions are called it returns the details to the item

double calculateBalance::GetStartAmount() {
   return startAmount;
}

double calculateBalance::GetmonthlyDeposit() {
   return monthlyDeposit;
}

double calculateBalance::GetyearlyInterest() {
   return yearlyInterest;
}

int calculateBalance::Getyears() {
   return years;
}
