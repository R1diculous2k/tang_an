#include "Account.h"
#include <iostream>

int main(int argc, char const *argv[])
{

	SavingAccount saving( 100, 3 );

	CheckingAccount checking1( 100, 5 );
	CheckingAccount checking2( 50, 5 );

	cout<<"SavingAccount:"<<endl;

	saving.debit(200);

	saving.debit(40);

	saving.credit(50);

	saving.debit(49);

	saving.debit(43);

	saving.credit(1);

	saving.setBalance(saving.calculate_Interest()+saving.getBalance());

	cout<<saving.getBalance()<<endl;


	cout <<"Checking Account1:"<< endl;

	checking1.debit(200);

	checking1.debit(40);

	checking1.credit(50);

	checking1.debit(49);

	checking1.debit(43);

	checking1.credit(1);

	cout<<checking1.getBalance()<<endl;


	cout <<"Checking Account2:"<< endl;

	checking2.debit(200);

	checking2.debit(40);

	checking2.credit(50);

	checking2.debit(49);

	checking2.debit(43);

	checking2.credit(1);

	cout<<checking2.getBalance()<<endl;

	return 0;
}
