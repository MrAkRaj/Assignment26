#include <iostream>
using namespace std;

class Bill {
private:
    int units;

public:
    void get(int u) {
        units = u;
    }

    double calculateBill() {
        if (units <= 100)
            return units * 1.20;
        else if (units <= 200)
            return (100 * 1.20) + (units - 100) * 2;
        else
            return (100 * 1.20) + (100 * 2) + (units - 200) * 3;
    }

    void displayBill() {
        cout << "Electricity Bill: " << calculateBill() << endl;
    }
};

int main() {
    Bill b;
    b.get(250);
    b.displayBill();
    return 0;
}
