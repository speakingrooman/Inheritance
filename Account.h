//
//  Account.h
//  Assignment2
//
//  Created by Rooman Zahid on 9/28/18.
//  Copyright © 2018 Rooman Zahid. All rights reserved.
//

#ifndef Account_h
#define Account_h
class Account{
public:
    Account(double=0);
    double credit(double);
    bool debit(double);
    void setBalance(double);
    double getBalance();
protected:
    double balance;
};

#endif /* Account_h */
