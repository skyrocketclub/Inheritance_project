#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_
#include "Savings_account.hpp"
#include <string>
using namespace std;

class Trust_account:public Savings_account
{
    
friend ostream & operator<<(ostream &COUT, const Trust_account &account);

protected:
    int withdrawal_count;
    
public:
    Trust_account(std::string name = "Unnamed", double balance = 0.0, double int_rate = 0.0, int withdrawal_count = 0);
//    Trust_account();
        bool withdraw (double amount);
        bool deposit (double amount);
    ~Trust_account();

};

#endif // _TRUST_ACCOUNT_H_
