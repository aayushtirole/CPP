#include <iostream>   
using namespace std;

// Class definition
class BankAccount {

private:
    // --- Private data member ---
    int balance;   // account ka balance (direct access nahi allowed)

public:
    // --- Setter function ---
    // balance set karne ke liye function
    void setBalance(int b) {
        if (b >= 0) {      // negative balance allow nahi karte
            balance = b;   // agar positive ya 0 hai to balance set ho jayega
        } else {
            cout << "Invalid balance! Cannot be negative." << endl;
        }
    }

    // --- Getter function ---
    // balance read karne ke liye function
    int getBalance() {
        return balance;   // balance ka current value return karega
    }

    // --- Extra function (deposit money) ---
    void deposit(int amount) {
        if (amount > 0) {              // sirf positive amount deposit ho
            balance += amount;         // balance me add ho gaya
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // --- Extra function (withdraw money) ---
    void withdraw(int amount) {
        if (amount > 0 && amount <= balance) {  // valid withdraw condition
            balance -= amount;                 // balance me se amount nikal do
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid withdraw request!" << endl;
        }
    }
};

// --- Main function ---
int main() {
    BankAccount acc;    // BankAccount ka object create kiya

    // --- Step 1: Set initial balance using setter ---
    acc.setBalance(1000);   // account me 1000 set kiya

    // --- Step 2: Get and print balance using getter ---
    cout << "Initial Balance: " << acc.getBalance() << endl;

    // --- Step 3: Deposit money ---
    acc.deposit(500);       // 500 deposit
    cout << "After Deposit, Balance: " << acc.getBalance() << endl;

    // --- Step 4: Withdraw money ---
    acc.withdraw(300);      // 300 withdraw
    cout << "After Withdraw, Balance: " << acc.getBalance() << endl;

    // --- Step 5: Invalid cases ---
    acc.setBalance(200);   // invalid (negative balance)
    acc.deposit(50);       // invalid deposit
    acc.withdraw(2000);     // invalid withdraw (jitna hai usse zyada nikalne ki try)

    return 0;
}
