#include "Checking_account.hpp"
#include "Account.hpp"

 ostream & operator <<(ostream &COUT, const Checking_account &account){
     COUT<<"[Account: "<<account.name<<" , "<<account.balance<<" ]";
     return COUT;
 }
 
 bool Checking_account::withdraw (double amount){
     amount += 1.50;
     return Account::withdraw(amount); // after the peculiarity of this type of account is accomplished, The main withdrawal can now proceed
 }
 
Checking_account::Checking_account(std::string name, double balance)
: Account (name, balance)
{
}

Checking_account::~Checking_account()
{
}

