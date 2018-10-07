//
//  CheckingAccount.cpp
//  Assignment2
//
//  Created by Rooman Zahid on 9/28/18.
//  Copyright © 2018 Rooman Zahid. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Account.h"
#include "CheckingAccount.h"
using namespace std;

CheckingAccount::CheckingAccount(double bal,double fee) :Account(bal) {
    setFee(fee);
}
void CheckingAccount::setFee(double fee){
    feeCharged=fee;
}
double CheckingAccount::getFee(){
    return feeCharged;
}
bool CheckingAccount::chargeFee(){
    if(feeCharged>getBalance()){
        cout<<"Insufficient funds, no fee charged ";
        return false;
    } else {
        balance=getBalance()-feeCharged;
        cout<<"Fee has been charged ";
        return true;
    }
}

