#include <iostream>
#include <string>

class BankAccount {
private:
    std::string depositorName;
    int accountNumber;
    std::string accountType;
    double accountBalance;

public:
    // Constructor to initialize data members
    BankAccount(std::string name, int number, std::string type, double balance) {
        depositorName = name;
        accountNumber = number;
        accountType = type;
        accountBalance = balance;
    }

    // Function to input account details
    void inputDetails() {
        std::cout << "Enter depositor name: ";
        std::getline(std::cin, depositorName);
        std::cout << "Enter account number: ";
        std::cin >> accountNumber;
        std::cout << "Enter account type (savings/current): ";
        std::cin >> accountType;
        std::cout << "Enter account balance: ";
        std::cin >> accountBalance;
    }

    // Function to deposit money
    void deposit(double amount) {
        accountBalance += amount;
        std::cout << "Deposit of " << amount << " successful.\n";
        std::cout << "New account balance is " << accountBalance << ".\n";
    }

    // Function to withdraw money
    void withdrawal(double amount) {
        if (amount > accountBalance) {
            std::cout << "Insufficient funds.\n";
        } else {
            accountBalance -= amount;
            std::cout << "Withdrawal of " << amount << " successful.\n";
            std::cout << "New account balance is " << accountBalance << ".\n";
        }
    }

    // Function to display account details
    void display() {
        std::cout << "Depositor name: " << depositorName << "\n";
        std::cout << "Account number: " << accountNumber << "\n";
        std::cout << "Account type: " << accountType << "\n";
        std::cout << "Account balance: " << accountBalance << "\n";
    }
};

int main() {
    std::string name, type;
    int number, choice;
    double balance, amount;

    // Input account details
    std::cout << "Enter depositor name: ";
    std::getline(std::cin, name);
    std::cout << "Enter account number: ";
    std::cin >> number;
    std::cout << "Enter account type (savings/current): ";
    std::cin >> type;
    std::cout << "Enter account balance: ";
    std::cin >> balance;

    // Create a BankAccount object with input details
    BankAccount account(name, number, type, balance);

    // Display menu and perform actions based on user choice
    do {
        std::cout << "\nMenu\n";
        std::cout << "1. Input details\n";
        std::cout << "2. Deposit\n";
        std::cout << "3. Withdrawal\n";
        std::cout << "4. Display\n";
        std::cout << "5. Quit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                // Input account details
                account.inputDetails();
                break;
            case 2:
                // Input amount and deposit money
                std::cout << "Enter amount to deposit: ";
                std::cin >> amount;
                account.deposit(amount);
                break;
            case 3:
                //
               std::cout << "Enter amount to withdraw: ";
               std::cin >> amount;
               account.withdrawal(amount);
               break;
            case 4:

            // Display account details
            account.display();
            break;
            case 5:
            // Quit program
            std::cout << "Quitting program...\n";
            break;
            default:
            std::cout << "Invalid choice. Please try again.\n";
            }
        } while (choice != 5);

        return 0;
}
