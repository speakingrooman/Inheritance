//
//  SavingAccount.cpp
//  Assignment2
//
//  Created by Rooman Zahid on 9/28/18.
//  Copyright © 2018 Rooman Zahid. All rights reserved.
//

#include <stdio.h>
#include "SavingAccount.h"
#include <iostream>
#include "Account.h"
using namespace std;

SavingAccount::SavingAccount(double bal,double rate) :Account(bal) {
    setInterest(rate);
}

void SavingAccount::setInterest(double rate){
    interestRate=rate;
}
double SavingAccount::getInterest(){
    return interestRate;
}

double SavingAccount::calculateInterest(){
    return interestRate*getBalance();
}
