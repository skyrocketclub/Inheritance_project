#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include <string>
#include <iostream>

class Account
{
    friend std::ostream &operator <<(std::ostream &COUT, const Account &account);
protected:
    double balance;         //An account has a balance
    std::string name;       //An account has a name......
    
public:
    
    Account(std::string name = "Unamed Account", double balance = 0.0);
    bool deposit(double amount);
    bool withdraw(double amount);
    double get_balance() const;
    ~Account();

};

#endif // ACCOUNT_H_
