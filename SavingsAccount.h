//********************************************************************
//
//  Author:               <Megan Hodges>
//
//  Program #:            <Program 12>
//
//  File Name:            <SavingsAccount.h>
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
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

class SavingsAccount
{
private:
	static double annualInterestRate;
	double savingsBalance;

public:
	SavingsAccount();
	SavingsAccount(double value);

	static void modifyInterestRate(double value);
	void modifySavingsBalance(double value);

	double calculateMonthlyInterest();
	double getAnnualInterestRate();
	double getSavingsBalance();

	void allTwelveMonths();

	static double getInit();
	void printAccount();
};

#endif
