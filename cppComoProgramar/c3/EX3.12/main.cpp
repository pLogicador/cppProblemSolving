
#include<string>
using std::string;
#include <iostream>
using std::cout;
using std::cin;
using std::endl;


// balance = saldo
// Accout = contaBanccária
// amount = quantia


// definição da classe
class Account
{
private:
    int balance;
    int amount;
public:
    Account( int initialBalance );
    void credit( int amount );
    void debit( int amount );
    int getBalance() const;
};


// construtor do saldo inicial
Account::Account( int initialBalance)
{
    if( initialBalance >= 0)
    {
        balance = initialBalance;
    }
    else
    {
        cout << "\nInvalid opening balance!" << endl;
        balance = 0;
    }
}

// adiciona uma quantia ao saldo da conta
void Account::credit( int amount)
{
    balance += amount;
}

void Account::debit( int amount )
{
    if(amount > balance)
    {
        cout << "Debit amount exceeded account balance.";
    }
    balance -= amount;
}

int Account::getBalance() const
{
    return balance;
};


int main()
{
    // Test of the first Account object
    int initialBalance1;
    int creditAmount1;
    int debitAmount1;

    initialBalance1 = 70000;

    // Para exibir o saldo inicial da conta
    Account bankAccount1( initialBalance1 );

    cout << "\nThe initial balance of the account1 is: " << bankAccount1.getBalance()
    << endl;

    // Para exibir o valor creditado(depositado)
    creditAmount1 = 50000;
    bankAccount1.credit( creditAmount1 );

    cout << "The credited amount is: " << creditAmount1
    << endl;

    // Para exibir o valor ganho
    debitAmount1 = 822300;
    bankAccount1.debit( debitAmount1 );

    cout << "The debited amount is: " << debitAmount1
    << endl;

    // Test of the second Account object

    int initialBalance2;
    int creditAmount2;
    int debitAmount2;

    initialBalance2 = -70000;

    // Para exibir o saldo inicial da conta
    Account bankAccount2( initialBalance2 );

    cout << "\nThe initial balance of the account2 is: " << bankAccount2.getBalance()
    << endl;

    // Para exibir o valor creditado(depositado)
    creditAmount2 = 50000;
    bankAccount2.credit( creditAmount2 );

    cout << "The credited amount is: " << creditAmount2
    << endl;

    // Para exibir o valor ganho
    debitAmount2 = 822300;
    bankAccount2.debit( debitAmount2 );

    cout << "The debited amount is: " << debitAmount2
    << endl;

    return 0;
};
