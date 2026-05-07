#include <iostream>
#include <cstring>
#include <windows.h>
using namespace std;

class BankAccount {
    string owner;       
    double* history; 
    int count;
    int maxCount;

public:
    BankAccount(const string& name, int maxTransactions) {
        owner = name;
        history = new double[maxTransactions];
		maxCount = maxTransactions;
        count = 0;
        cout << "[Constructor] Створено рахунок: " << owner << endl;
    }

    BankAccount(const BankAccount& a) {
		owner = a.owner;
        history = new double[a.maxCount];
        for (int i = 0; i < a.count; i++)
            history[i] = a.history[i];
        count = a.count;
        cout << "[Copy constructor] Скопійовано рахунок: " << owner << endl;
    }

    ~BankAccount() {
        cout << "[Destructor] Видалено рахунок: " << owner << endl;
        delete[] history;
    }

    void addTransaction(double amount) {
        history[count++] = amount;
    }

    void setOwner(const string& name) {
        owner = name;
    }


    void print() const {
        cout << "Власник: " << owner << " | Транзакції: ";
        for (int i = 0; i < count; i++)
            cout << history[i] << " , ";
        cout << endl;
    }
};

int main() {  
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    BankAccount acc1("Максим", 10);
    acc1.addTransaction(1000.0);
    acc1.addTransaction(-250.5);
    acc1.addTransaction(500.0);

    cout << "\n--- До копіювання ---" << endl;
    acc1.print();


    BankAccount acc2 = acc1;

    cout << "\n--- Після копіювання ---" << endl;
    acc1.print();
    acc2.print();


    acc1.setOwner("Андрій");
    acc1.addTransaction(9999.0);

    cout << "\n--- Після змін в acc1 ---" << endl;
    acc1.print();
    acc2.print();  

    cout << endl;
    return 0;
}