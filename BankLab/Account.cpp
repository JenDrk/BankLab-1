#include "Account.h"
#include "Customer.h"
#include <iostream>
using namespace std;

Account::Account(Customer customer, int accountNumber) : _accountOwner(customer), _accountNumber(accountNumber)
{
}

Account::~Account()
{
}

void Account::Deposit(int numberOfPennies)
{
	_balanceInPennies += numberOfPennies;
	//TODO: Add a message to the log
	cout << "Deposited " << numberOfPennies << endl;

}

void Account::Withdraw(int numberOfPennies)
{
	_balanceInPennies -= numberOfPennies;
	//TODO: Add a message to the log
	cout << "Withdrew " << numberOfPennies << endl;
}

int Account::getBalance()
{
	return 0;
}

int Account::getAccountNumber()
{
	return _accountNumber;
}

std::string Account::getAccountName()
{
	return _accountOwner.getFullName();
}
