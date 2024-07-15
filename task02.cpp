#include <iostream>
using namespace std;

class Time {
private:
    int h, m, s;

public:
    void setTime(int hours, int minutes, int seconds) {
        h = hours;
        m = minutes;
        s = seconds;
    }

    void showTime() {
        cout << h << " hours " << m << " minutes " << s << " seconds" << endl;
    }

    void normalize() {
        m += s / 60;
        s = s % 60;
        h += m / 60;
        m = m % 60;
    }

    Time add(Time t) {
        Time temp;
        temp.h = h + t.h;
        temp.m = m + t.m;
        temp.s = s + t.s;
        temp.normalize();
        return temp;
    }
};

int main() {
    Time t1, t2, t3;
    t1.setTime(2, 45, 50);
    t2.setTime(1, 20, 40);
    t3 = t1.add(t2);
    t3.showTime();
    return 0;
}
