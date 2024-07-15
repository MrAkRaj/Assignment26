#include <iostream>
using namespace std;

class Bank {
private:
    double principal;
    float rate;
    int years;

public:
    Bank(double p, float r, int y) : principal(p), rate(r), years(y) {}

    double calculateSimpleInterest() {
        return (principal * rate * years) / 100;
    }

    void displayInterest() {
        cout << "Simple Interest: " << calculateSimpleInterest() << endl;
    }
};

int main() {
    Bank b(1000, 5, 2);
    b.displayInterest();
    return 0;
}
