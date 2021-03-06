#include "Account.hpp"
#include <iostream>

Account::Account(std::string name, double balance)
:balance {balance}, name {name}
{
}

Account::~Account()
{
}

bool Account::deposit (double amount){
        if(amount < 0)
            return false;
        else{
        balance += amount;
        return true;
        }
}

bool Account::withdraw (double amount) {
        
        if(balance- amount >= 0){
            balance-=amount;
            return true;
        }
        else{
            return false;
        }
}

double Account::get_balance()const{
    return balance;
}

std::ostream &operator<<(std::ostream &COUT, const Account &account){
    COUT<<"[Account: "<<account.name<<" : "<<account.balance<<"]";
    return COUT;
}