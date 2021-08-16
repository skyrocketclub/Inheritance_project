#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.hpp"


//The declaration below shows the savings account to be derived from Account
class Savings_account: public Account
{
    friend std::ostream &operator<<(std::ostream &COUT , const Savings_account &account);
    
protected:
    double int_rate;//interest rate of 5%
public:
    
    Savings_account(std::string name = "Unnamed Savings Account", double balance = 0.0, double int_rate = 0.0);
    ~Savings_account();
    bool deposit (double amount);

};

#endif // _SAVINGS_ACCOUNT_H_
