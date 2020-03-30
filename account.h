class Account {
private:
    double balance;

public:
    Account();

    void withdraw(const double &sum);
    void deposit(const double &sum);
    double balanceInfo();
    void printTransactions(double oldBalance);
    void makeTransactions();
};

