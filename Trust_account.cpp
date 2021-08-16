#include "Trust_account.hpp"

bool Trust_account::withdraw(double amount){
    if (withdrawal_count>=3 || amount >= (0.2 * balance)){
        cout<<"Unsuccesful Transaction!"<<endl;
        return false;
    }
    else{
        withdrawal_count++;
        return Account::withdraw(amount);
    }
}

bool Trust_account::deposit(double amount){
    if (amount >= 5000.00){
        amount += 50.00;
    }
    return Savings_account::deposit(amount);
}

Trust_account::Trust_account(std::string name, double balance, double int_rate, int withdrawal_count)
:Savings_account(name, balance, int_rate), withdrawal_count{withdrawal_count}
{
}

Trust_account::~Trust_account()
{
}

ostream &operator <<(ostream &COUT, const Trust_account &account){
    COUT<<"[Account: "<<account.name<<" , "<<account.balance<<" , "<<account.int_rate<<" , Withdrawals:"<<account.withdrawal_count;
    return COUT;
}
