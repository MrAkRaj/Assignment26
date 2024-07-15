#include <iostream>
using namespace std;

class Box {
private:
    int length, breadth, height;

public:
    Box(int l, int b, int h) : length(l), breadth(b), height(h) {}

    int calculateVolume() {
        return length * breadth * height;
    }
};

int main() {
    Box b(3, 4, 5);
    cout << "Volume of Box: " << b.calculateVolume() << endl;
    return 0;
}
