//
//  SavingAccount.h
//  Assignment2
//
//  Created by Rooman Zahid on 9/28/18.
//  Copyright © 2018 Rooman Zahid. All rights reserved.
//

#ifndef SavingAccount_h
#define SavingAccount_h
#include "Account.h"
class SavingAccount : public Account{
public:
    SavingAccount(double=0,double=0);
    void setInterest(double);
    double getInterest();
    double calculateInterest();
private:
    double interestRate;
    
};

#endif /* SavingAccount_h */
