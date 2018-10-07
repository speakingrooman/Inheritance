//
//  CheckingAccount.h
//  Assignment2
//
//  Created by Rooman Zahid on 9/28/18.
//  Copyright © 2018 Rooman Zahid. All rights reserved.
//

#ifndef CheckingAccount_h
#define CheckingAccount_h
#include "Account.h"
class CheckingAccount : public Account{
public:
    CheckingAccount(double=0,double=0);
    void setFee(double);
    double getFee();
    bool chargeFee();
private:
    double feeCharged;
    
};

#endif /* CheckingAccount_h */
