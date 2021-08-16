#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include "Checking_account.hpp"
#include "Account.hpp"
#include <string>
using namespace std;

class Checking_account: public Account
{
    friend ostream & operator <<(ostream &COUT, const Checking_account &account);
public:
    Checking_account(std::string name ="Unnamed", double balance = 0.0);
    bool withdraw (double amount);
    ~Checking_account();

};

#endif // _CHECKING_ACCOUNT_H_
