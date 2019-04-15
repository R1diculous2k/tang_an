#include<iostream>
using namespace std;
class Account{
	public :
	Account();
	void credit(double );
	bool debit(double );
	double getBalance( );
	private:
	double balance;

};
class SavingsAccount:public Account{
	public:
	SavingsAccount(double,double);
	double calculateInterest();

	private:
	double interestrate;

};
class CheckingAccount:public Account{
	public :
	CheckingAccount(double ,double);
	void credit(double );
	bool debit(double );

	private:
	double shouyi;

};
int main()
{
	SavingsAccount savings(100, 3);
	CheckingAccount checkings1(100, 5);
	CheckingAccount checkings2(50, 5);

	cout << "\nSavings Account:" << endl;
	savings.debit(200);
	savings.debit(40);
	savings.credit(50);
	savings.debit(49);
	savings.debit(43);
	savings.credit(1);
	savings.credit(savings.calculateInterest());
;
	cout << "  账户的余额为：" << savings.getBalance() << endl;

	cout << "\nChecking Account 1:" << endl;
	checkings1.debit(200);
	checkings1.debit(40);
	checkings1.credit(50);
	checkings1.debit(49);
	checkings1.debit(43);
	checkings1.credit(1);

	cout << "  账户的余额为：" << checkings1.getBalance() << endl;

	cout << "\nChecking Account 2:" << endl;
	checkings2.debit(200);
	checkings2.debit(40);
	checkings2.credit(50);
	checkings2.debit(49);
	checkings2.debit(43);
	checkings2.credit(1);


	cout << "  账户的余额为：" << checkings2.getBalance();

	return 0;
}
Account::Account(){
	balance=0;
}
void Account::credit(double f)
{
	balance+=f;
}
bool Account::debit(double f){
	if(balance<f)
	{
		cout<<"Debit amount exceeded account balance\n";
		return false;
	}
	else
	{
		balance-=f;
		return true;
	}

}
double Account::getBalance(){
	return balance;
}
SavingsAccount::SavingsAccount(double f1,double f2)
:Account()
{
	Account::credit(f1);
	this->interestrate=f2/100.0;
}
double SavingsAccount::calculateInterest()
{
	return interestrate*getBalance();
}
CheckingAccount::CheckingAccount(double f1,double f2)
:Account()
{
	Account::credit(f1);
	shouyi=f2;
}
void CheckingAccount::credit(double f)
{
	Account::credit(f);
	bool s;
	s=(getBalance()>=shouyi);

	if(s==false)
	{
	cout<<"Transaction fee exceeded account balance while crediting\n";
	Account::debit(f);

	}
	else
	Account::debit(shouyi);
}
bool CheckingAccount::debit(double f)
{	bool s;
	s=Account::debit(f);
	if(s==true)
	{

		s=(getBalance()>=shouyi);
		if(s==false){
		cout<<"Transaction fee exceeded account balance while debiting\n";
		Account::credit(f);
		return false;
		}
		else{
		Account::debit(shouyi);
		return true;
		}

	}
	else return false;
}
