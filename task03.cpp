#include <iostream>
using namespace std;

class Cube {
private:
    int side;

public:
    Cube(int s) : side(s) {}

    int calculateVolume() {
        return side * side * side;
    }
};

int main() {
    Cube c(3);
    cout << "Volume of Cube: " << c.calculateVolume() << endl;
    return 0;
}
