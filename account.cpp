#include "account.h"
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

Account::Account() {
    this->balance = 0;
}

void Account::withdraw(const double &sum) {
    double oldBalance = this->balance;
    this->balance -= sum;

    this->printTransactions(oldBalance);
}

void Account::deposit(const double &sum) {
    double oldBalance = this->balance;
    this->balance += sum;

    this->printTransactions(oldBalance);
}

double Account::balanceInfo() {
    return this->balance;
}

void Account::printTransactions(double oldBalance) {
    ofstream file;
    file.open("transactions.txt", ios::app);
    if(this->balance > oldBalance)
        file << "IN " << this->balance - oldBalance << " " << this->balance << endl;
    else
        file << "OUT " << oldBalance - this->balance << " " << this->balance << endl;
    file.close();
}

void Account::makeTransactions() {
    ifstream file("make_trans.txt");
    string thisLine;
    double s;
    while (getline(file, thisLine)) {
        if (thisLine[0] == 'I') {
            for (int i=0; i!='\n'; i++) {
                thisLine[i] = thisLine[i+3];
            }
            s = stod(thisLine);
            deposit(s);
        }
        else if (thisLine[0] == 'O') {
            for (int i=0; i!='\n'; i++) {
                thisLine[i] = thisLine[i+4];
            }
            s = stod(thisLine);
            withdraw(s);
        }
    }
}
