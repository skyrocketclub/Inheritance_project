#ifndef _ACCOUNT_UTIL_
#define _ACCOUNT_UTIL_
#include <vector>
#include "Account.hpp"
#include "Savings_account.hpp"
#include "Checking_account.hpp"
#include "Trust_account.hpp"

void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts, double amount);
void withdraw(std::vector<Account> &accounts, double amount);

void display(const std::vector<Savings_account> &accounts);
void deposit(std::vector<Savings_account> &accounts, double amount);
void withdraw(std::vector<Savings_account> &accounts, double amount);

void display(const std::vector<Checking_account> &accounts);
void deposit(std::vector<Checking_account> &accounts, double amount);
void withdraw(std::vector<Checking_account> &accounts, double amount);

void display(const std::vector<Trust_account> &accounts);
void deposit(std::vector<Trust_account> &accounts, double amount);
void withdraw(std::vector<Trust_account> &accounts, double amount);

#endif // _ACCOUNT_UTIL_
