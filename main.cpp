//Rooman Zahid CS-373 Assignment 2
#include <iostream>
#include "Account.h"
#include "SavingAccount.h"
#include "CheckingAccount.h"
using  namespace std;
int main(){
    
    /*
    Testing different cases
    Account Bill; //Constructor assigns 0 to balance since no value given
    Bill.credit(2); //adds 2 to initial or 0 in this case
    cout<<Bill.getBalance()<<endl;

    Account Tom(3);
    cout<<Tom.debit(4); //error since you cannot withdraw more than in your account

    Account Smith(-1);
    //negative value in balance shows error and reassigns balance to 0 due to constructor
    Smith.credit(2);
    cout<<Smith.getBalance()<<endl; //adds 2 to balance which was reassigned to 0
     */
    
    Account Tom(1000);
    cout<<"Base Class"<<endl;
    cout<<"Initial Balance "<<Tom.getBalance()<<endl;
    Tom.credit(5);
    cout<<"Balance after Credit "<<Tom.getBalance()<<endl;
    cout<<"Debit success or fail "<<Tom.debit(3)<<endl;
    cout<<"Balance after Debit "<<Tom.getBalance()<<endl<<endl;

    
    
    SavingAccount TomSavings(3000,.10);
    cout<<"Savings Account"<<endl;
    cout<<"Starting balance: "<<TomSavings.getBalance()<<endl;
    cout<<"Interest rate is "<<TomSavings.getInterest()<<endl;
    cout<<"Interest earned on initial Balance "<<TomSavings.calculateInterest()<<endl;
    TomSavings.credit(TomSavings.calculateInterest());
    TomSavings.debit(10);
    cout<<"Ending balance after transactions: "<<TomSavings.getBalance()<<endl<<endl;
//  calculateInterest does not change account balance so invoke it into credit function

    
    CheckingAccount TomChecking(1000,5);
    cout<<"Checking Account"<<endl;
    cout<<"Starting balance: "<<TomChecking.getBalance()<<endl;
    cout<<"Fee cost is: "<<TomChecking.getFee()<<endl;
    cout<<TomChecking.chargeFee()<<endl;
    cout<<"Account balance after fee charged is: "<<TomChecking.getBalance()<<endl;
    TomChecking.debit(10);
    TomChecking.credit(5);
    cout<<"Ending balance after transactions: "<<TomChecking.getBalance()<<endl;
    
    return 0;
}
