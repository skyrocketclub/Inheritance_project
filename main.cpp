#include <iostream>
#include "Account.hpp"
#include "Savings_account.hpp"
#include "Account_Util.hpp"
#include "Checking_account.hpp"
#include "Trust_account.hpp"

using namespace std;

int main() {
    //
//    cout<<"\n===Account==========================================="<<endl;
//    Account acc {};
//    acc.deposit(2000.0);
//    acc.withdraw(500.0);
//    
//    cout<<endl;
//    
//    Account *p_acc{nullptr};
//    p_acc = new Account();
//    p_acc -> deposit (1000.0);
//    p_acc -> withdraw(500.0);
//    delete p_acc;
//    
//    //Use the Savings Account class
//    cout<<"\n===Savings Account ======================================="<<endl;
//    Savings_account sav_acc {};
//    sav_acc.deposit(2000.0);
//    sav_acc.withdraw(500.0);
//    
//    cout<<endl;
//    
//    Savings_account *p_sav_acc {nullptr};
//    p_sav_acc = new    Savings_account();
//    p_sav_acc->deposit(1000.0);
//    p_sav_acc->withdraw(500);
//    delete p_sav_acc;

//    Account a1 {1000.0};
//    cout<<a1<<endl;
//    a1.deposit(500.0);
//    cout<<a1<<endl;
//    
//    a1.withdraw(1000);
//    cout<<a1<<endl;
//    
//    a1.withdraw(5000);
//    cout<<a1<<endl;
//    
//    cout<<"\n=======Savings Account class ================== "<<endl;
//    Savings_account s1 {1000,5.0};
//    cout<<s1<<endl;
//    
//    s1.deposit(1000);
//    cout<<s1<<endl;
//    
//    s1.withdraw(2000);
//    cout<<s1<<endl;
//    
//    s1.withdraw(1000);
//    cout<<s1<<endl;
    cout.precision(2);
    cout<<fixed;
    
    //Accounts
    vector<Account>accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000 });
    accounts.push_back(Account {"Curly", 5000});
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);
    
    //Savings
    vector <Savings_account> sav_accounts;
    sav_accounts.push_back(Savings_account{});
    sav_accounts.push_back(Savings_account {"Superman"});
    sav_accounts.push_back(Savings_account{"Batman", 2000});
    sav_accounts.push_back(Savings_account {"wonderwoman", 5000, 5.0});
    
    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);
    
     //Checking Accounts
    vector <Checking_account> c_accounts;
    c_accounts.push_back(Checking_account{});
    c_accounts.push_back(Checking_account {"Larry"});
    c_accounts.push_back(Checking_account {"Moe", 2000 });
    c_accounts.push_back(Checking_account {"Curly", 5000});
    
    display(c_accounts);
    deposit(c_accounts, 1000);
    withdraw(c_accounts, 2000);
    
     //Checking Accounts
    vector <Trust_account> t_accounts;
    t_accounts.push_back(Trust_account{});
    t_accounts.push_back(Trust_account {"Larry"});
    t_accounts.push_back(Trust_account {"Moe", 2000 });
    t_accounts.push_back(Trust_account {"Curly", 5000});
    
    display(t_accounts);
    deposit(t_accounts, 10000);
    withdraw(t_accounts, 5000);
//     withdraw(t_accounts, 200);
//      withdraw(t_accounts, 200);
//       withdraw(t_accounts, 200);
    return 0;
}