#include<iostream>
using namespace std;
class overload {
private:
    int x, y;

public:
    overload(int x = 0, int y = 0) : x(x), y(y) {}
    friend overload operator+(overload& l1, overload& l2) {
        return overload(l1.x + l2.x, l1.y + l2.y);
    }

    friend overload operator-(overload& l1, overload& l2) {
        return overload(l1.x - l2.x, l1.y - l2.y);
    }

    int getX(){ return x; }
    int getY(){ return y; }

    void display() {
        cout << "(" << x << ", " << y << ")" <<endl;
    }
};

int main() {
    overload l1(1, 2);
    overload l2(3, 4);
    overload l3 = l1 + l2;
    overload l4 = l1 - l2;
    cout << "l1: ";
    l1.display();
    cout << "l2: ";
    l2.display();
    cout << "l3: ";
    l3.display();
    cout << "l4: ";
    l4.display();
    return 0;
}