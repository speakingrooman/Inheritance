//
//  Account.cpp
//  Assignment2
//
//  Created by Rooman Zahid on 9/28/18.
//  Copyright © 2018 Rooman Zahid. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Account.h"
using namespace std;
Account::Account(double bal){
    if(bal<0){
        bal=0;
        cout<<"Error balance is negative "<<endl;
    }
    setBalance(bal);
}

void Account::setBalance(double bal){
    balance=bal;
}

double Account::getBalance(){
    return balance;
}

double Account::credit(double amount){
    balance+=amount;
    return balance;
}
bool Account::debit(double amount){
    if (balance-amount>=0) {
        balance-=amount;
        return true;
    } else {
        balance=balance;
        cout<<"Error not enough funds in Account for withdrawal";
        return false;
    }
}
