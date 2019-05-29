#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
using namespace std;

class Account
{
private:
	double balance;
public:
	Account(double ba);
	~Account();
	int credit(double cash);
	int debit(double cash);
	double getBalance();
	int setBalance(double);
};

class SavingAccount : public Account
{
private:
	double interestrate;
public:
	SavingAccount(double ba, double ite);
	~SavingAccount();
	double calculate_Interest();
};

class CheckingAccount : public Account
{
private:
	double fee;
public:
	CheckingAccount(double ba,double fe);
	~CheckingAccount();
	int credit(double cash);
	int debit(double cash);
};

#endif
