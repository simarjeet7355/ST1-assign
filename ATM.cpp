#include <iostream>
#include <vector>
#include <string>

using namespace std;

class BankAccount {
public:
    BankAccount(string id, string password) : id(id), password(password), balance(0) {}

    bool login(string id, string password) {
        return this->id == id && this->password == password;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit successful. New balance: " << balance << endl;
    }

    void requestBalance() {
        cout << "Your current balance is: " << balance << endl;
    }

private:
    string id;
    string password;
    double balance;
};

int main() {
    vector<BankAccount> accounts;
    int choice;

    while (true) {
        cout << "1) Create a bank account" << endl;
        cout << "2) Login" << endl;
        cout << "3) Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string id, password;
            cout << "Enter your user id: ";
            cin >> id;
            cout << "Enter your password: ";
            cin >> password;
            accounts.push_back(BankAccount(id, password));
            cout << "Bank account created successfully." << endl;
        } else if (choice == 2) {
            string id, password;
            cout << "Enter your user id: ";
            cin >> id;
            cout << "Enter your password: ";
            cin >> password;

            bool loggedIn = false;
            for (size_t i = 0; i < accounts.size(); ++i) {
                if (accounts[i].login(id, password)) {
                    loggedIn = true;
                    while (loggedIn) {
                        int accountChoice;
                        cout << "1) Withdraw money" << endl;
                        cout << "2) Deposit money" << endl;
                        cout << "3) Request balance" << endl;
                        cout << "4) Logout" << endl;
                        cout << "Enter your choice: ";
                        cin >> accountChoice;

                        if (accountChoice == 1) {
                            double amount;
                            cout << "Enter the amount to withdraw: ";
                            cin >> amount;
                            accounts[i].withdraw(amount);
                        } else if (accountChoice == 2) {
                            double amount;
                            cout << "Enter the amount to deposit: ";
                            cin >> amount;
                            accounts[i].deposit(amount);
                        } else if (accountChoice == 3) {
                            accounts[i].requestBalance();
                        } else if (accountChoice == 4) {
                            loggedIn = false;
                        } else {
                            cout << "Invalid choice." << endl;
                        }
                    }
                    break;
                }
            }
            if (!loggedIn) {
                cout << "Invalid user id or password." << endl;
            }
        } else if (choice == 3) {
            break;
        } else {
            cout << "Invalid choice." << endl;
        }
    }
    return 0;
}
