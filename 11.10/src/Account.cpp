#include <iostream>
#include "Account.h"
using namespace std;


Account::Account(double ba)
{
	balance = ba;
}

Account::~Account()
{
	balance = 0.0;
}

int Account::credit(double cash)
{

	balance += cash;
	return 0;
}

int Account::debit(double cash)
{

	if ((balance - cash) < 0.0)
	{
		cout<<"debit amount exceeded account balance"<<endl;
		return 1;
	}else
	{
		balance -= cash;
	}
	return 0;
}

double Account::getBalance()
{
	return balance;
}

int Account::setBalance(double cash)
{
	balance = cash;

	return 0;
}

SavingAccount::SavingAccount(double ba, double inte) :Account(ba)
{

	interestrate = inte;
}

SavingAccount::~SavingAccount()
{

	interestrate = 0.0;
}

double SavingAccount::calculate_Interest()
{

	return (getBalance()*interestrate)/100.0;
}


CheckingAccount::CheckingAccount(double ba , double fe) : Account(ba)
{

	fee = fe;
}
CheckingAccount::~CheckingAccount()
{

	fee = 0.0;
}

int CheckingAccount::credit(double cash)
{
	if (!Account::credit(cash))
	{
		if (getBalance() > fee)
		{

			Account::debit(fee);
		}else
		{

			Account::debit(cash);
			cout<<"Transaction fee exceeded account balance while crediting"<<endl;
		}
	}
	return 0;
}

int CheckingAccount::debit(double cash)
{
	if (! Account::debit(cash))
	{
		if (Account::getBalance() > fee)
		{

			Account::debit(fee);
		}else
		{

			Account::credit(cash);
			cout<<"Transaction fee exceeded account balance while debiting"<<endl;
		}
	}
	return 0;
}
