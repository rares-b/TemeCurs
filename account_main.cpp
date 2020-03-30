#include "account.h"
#include <iostream>

using namespace std;

int main() {
    Account newAccount;
    newAccount.makeTransactions();
    cout << newAccount.balanceInfo();

    return 0;
}