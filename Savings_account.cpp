#include "Savings_account.hpp"
#include <iostream>

Savings_account::Savings_account(std::string name, double balance, double int_rate)
    :Account(name,balance), int_rate{int_rate}
{
}

Savings_account::~Savings_account()
{
}

//the deposit function in the Account is being overriden here...
bool Savings_account::deposit(double amount){
    amount  = amount + (amount * int_rate/100);
  return  Account::deposit(amount); //the deposit method from the Account class is called here...
}


std::ostream &operator <<(std::ostream &COUT, const Savings_account &account){
    COUT<<"[Savings account balance: "<<account.name<<" : "<<account.balance<<" , "<<account.int_rate<<"% ]";
    return COUT;
}