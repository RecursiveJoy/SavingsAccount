//********************************************************************
//
//  Author:               <Megan Hodges>
//
//  Program #:            <Program 12>
//
//  File Name:            <SavingsAccount.cpp>
//
//  Course:               COSC 1337 Programming Fundamentals II
//
//  Due Date:             <12-13-17>
//
//  Instructor:           Fred Kumi 
//
//  Maximum points:       <40>
//
//  Description:
//	1. Create 2 savings accounts with balances initialized.
//	2. Set annual interest rate
//	3. Calculate and add monthly interest for entire year.
//	4. Print both accounts
//	5. Get new yearly interest
//	6. Calculate and add monthly interest for next month.
//	7. Print both accounts.
//********************************************************************
#include "SavingsAccount.h"
#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************
*	 SavingsAccount::SavingsAccount()
*	Default Constructor, initialize savings at 0.00
*
***********************************************************/
SavingsAccount::SavingsAccount()
{
	savingsBalance = 0.00;
}

/**********************************************************
*	 SavingsAccount::SavingsAccount(double value)
*	Constructs a new savings account with specified values
*
***********************************************************/
SavingsAccount::SavingsAccount(double value)
{
	savingsBalance = value;
}

/**********************************************************
*	 double SavingsAccount::annualInterestRate
*	all accounts have same annual interest rate.
*	
***********************************************************/
double SavingsAccount::annualInterestRate = 0;

/**********************************************************
*	 void SavingsAccount::modifyInterestRate
*	change the value of annualInterestRate across all objects.
*
***********************************************************/
void SavingsAccount::modifyInterestRate(double value)
{
	value = value / 100.0;
	annualInterestRate = value;
}

/**********************************************************
*	 void SavingsAccount::modifySavingsBalance(double value)
*	change the value of SavingsBalance
*
***********************************************************/
void SavingsAccount::modifySavingsBalance(double value)
{
	savingsBalance += value;
}

/**********************************************************
*	 SavingsAccount::calculateMonthlyInterest(double value)
*	calculate the total monthly interest
*
***********************************************************/
double SavingsAccount::calculateMonthlyInterest()
{
	double monthly = (getSavingsBalance() * getAnnualInterestRate())/12;
	return monthly;
}

/**********************************************************
*	 double SavingsAccount::getAnnualInterestRate()
*	returns the annual interest rate.
*
***********************************************************/
double SavingsAccount::getAnnualInterestRate()
{
	return annualInterestRate;
}

/**********************************************************
*	 SavingsAccount::getSavingsBalance()
*	gets the current account balance
*
***********************************************************/
double SavingsAccount::getSavingsBalance()
{
	return savingsBalance;
}

/**********************************************************
*	 SavingsAccount::allTwelveMonths()
*	pays out interest each month in the year.
*
***********************************************************/
void SavingsAccount::allTwelveMonths()
{
	for (int count = 0; count < 12; count++)
	{
		this->modifySavingsBalance(this->calculateMonthlyInterest());
	}
}

/**********************************************************
*	 double SavingsAccount::getInit()
*	gets initial balance from user
*
***********************************************************/
double SavingsAccount::getInit()
{
	double value;

	cout << "Enter a value for the savings account:" << endl;
	cin >> value;

	return value;
}

/**********************************************************
*	 SavingsAccount::printBalance()
*	Prints the savingsBalance
*
***********************************************************/
void SavingsAccount::printAccount()
{
	cout << fixed << showpoint << setprecision(2);
	cout << "Current Account Balance: $" << getSavingsBalance() << " " << endl;
	cout << "Your yearly interest rate is " << getAnnualInterestRate() * 100 << "%" << endl;
	cout << "---------------------------------------------------------------" << endl;
}