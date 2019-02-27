//********************************************************************
//
//  Author:               <Megan Hodges>
//
//  Program #:            <Program 12>
//
//  File Name:            <Main.cpp>
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

int main()
{
	double init = SavingsAccount::getInit();
	SavingsAccount saver1(init);
	cin.get();

	init = SavingsAccount::getInit();
	SavingsAccount saver2(init);
	cin.get();


	saver1.modifyInterestRate(4.0);

	saver1.allTwelveMonths();
	saver2.allTwelveMonths();

	saver1.printAccount();
	saver2.printAccount();
	cin.get();

	saver1.modifyInterestRate(5.0);

	saver1.modifySavingsBalance(saver1.calculateMonthlyInterest());
	saver2.modifySavingsBalance(saver2.calculateMonthlyInterest());

	saver1.printAccount();
	saver2.printAccount();
	cin.get();

	return 0;
}