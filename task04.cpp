#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter() : count(0) {}

    void increment() {
        count++;
    }

    void showCount() {
        cout << "Counter: " << count << endl;
    }
};

int main() {
    Counter c;
    c.increment();
    c.increment();
    c.increment();
    c.showCount();
    return 0;
}
