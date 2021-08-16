#include "Account_Util.hpp"
#include <iostream>

void display(const std::vector<Account> &accounts){
    std::cout<<"\n====Accounts ==============================="<<std::endl;
    for(const auto &acc:accounts){
        std::cout<<acc<<std::endl;
    }
}


void deposit(std::vector<Account> &accounts, double amount){
    std::cout<<"\n===Depositing to Accounts ======================="<<std::endl;
    for(auto &acc: accounts){
        if (acc.deposit(amount)){
            std::cout<<"Deposited "<<amount<<" to "<<acc << std::endl;
        }
        else{
            std::cout<<"Failed Deposit of "<<amount<<" to "<< acc<< std::endl;
        }
    }
}

void withdraw(std::vector<Account> &accounts, double amount){
    std::cout<<"\n===== Withdrawing from Accounts ================== "<<std::endl;
    for (auto &acc: accounts){
        if (acc.withdraw(amount)){
            std::cout<<"Withdrew "<<amount<<" from "<<acc<<std::endl;
        }
        else{
            std::cout<<"Failed Withdrawal of "<<amount<<" from "<<acc<<std::endl;
        }
    }
}




void display(const std::vector<Savings_account> &accounts){
    std::cout<<"\n====Accounts ==============================="<<std::endl;
    for(const auto &acc:accounts){
        std::cout<<acc<<std::endl;
    }
}


void deposit(std::vector<Savings_account> &accounts, double amount){
    std::cout<<"\n===Depositing to Accounts ======================="<<std::endl;
    for(auto &acc: accounts){
        if (acc.deposit(amount)){
            std::cout<<"Deposited "<<amount<<" to "<<acc << std::endl;
        }
        else{
            std::cout<<"Failed Deposit of "<<amount<<" to "<< acc<< std::endl;
        }
    }
}

void withdraw(std::vector<Savings_account> &accounts, double amount){
    std::cout<<"\n===== Withdrawing from Accounts ================== "<<std::endl;
    for (auto &acc: accounts){
        if (acc.withdraw(amount)){
            std::cout<<"Withdrew "<<amount<<" from "<<acc<<std::endl;
        }
        else{
            std::cout<<"Failed Withdrawal of "<<amount<<" from "<<acc<<std::endl;
        }
    }
}



void display(const std::vector<Checking_account> &accounts){
    std::cout<<"\n====Checking Accounts ==============================="<<std::endl;
    for(const auto &acc:accounts){
        std::cout<<acc<<std::endl;
    }
}


void deposit(std::vector<Checking_account> &accounts, double amount){
    std::cout<<"\n===Checking Accounts  ======================="<<std::endl;
    for(auto &acc: accounts){
        if (acc.deposit(amount)){
            std::cout<<"Deposited "<<amount<<" to "<<acc << std::endl;
        }
        else{
            std::cout<<"Failed Deposit of "<<amount<<" to "<< acc<< std::endl;
        }
    }
}

void withdraw(std::vector<Checking_account> &accounts, double amount){
    std::cout<<"\n===== Withdrawing from Checking Accounts  ================== "<<std::endl;
    for (auto &acc: accounts){
        if (acc.withdraw(amount)){
            std::cout<<"Withdrew "<<amount<<" from "<<acc<<std::endl;
        }
        else{
            std::cout<<"Failed Withdrawal of "<<amount<<" from "<<acc<<std::endl;
        }
    }
}




void display(const std::vector<Trust_account> &accounts){
    std::cout<<"\n====Trust Accounts ==============================="<<std::endl;
    for(const auto &acc:accounts){
        std::cout<<acc<<std::endl;
    }
}


void deposit(std::vector<Trust_account> &accounts, double amount){
    std::cout<<"\n===Depositing to Trust Accounts ======================="<<std::endl;
    for(auto &acc: accounts){
        if (acc.deposit(amount)){
            std::cout<<"Deposited "<<amount<<" to "<<acc << std::endl;
        }
        else{
            std::cout<<"Failed Deposit of "<<amount<<" to "<< acc<< std::endl;
        }
    }
}

void withdraw(std::vector<Trust_account> &accounts, double amount){
    std::cout<<"\n===== Withdrawing from Trust Accounts ================== "<<std::endl;
    for (auto &acc: accounts){
        if (acc.withdraw(amount)){
            std::cout<<"Withdrew "<<amount<<" from "<<acc<<std::endl;
        }
        else{
            std::cout<<"Failed Withdrawal of "<<amount<<" from "<<acc<<std::endl;
        }
    }
}