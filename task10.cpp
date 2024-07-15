#include <iostream>
using namespace std;

class StaticCount {
private:
    static int count;

public:
    void increment() {
        count++;
    }

    static void displayCount() {
        cout << "Count: " << count << endl;
    }
};

int StaticCount::count = 0;

int main() {
    StaticCount s1, s2, s3;
    s1.increment();
    s2.increment();
    s3.increment();
    StaticCount::displayCount();
    return 0;
}
