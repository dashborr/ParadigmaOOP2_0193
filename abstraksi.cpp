#include <iostream>
using namespace std;

class Abstraksi {
private: string x, y;

public:
    void setX(string a, string b) {
        x = a;
        y = b;
    }

    void display() {
        cout << " x: " << x << endl;
        cout << " y: " << y << endl;
    }
};

int main() {
    Abstraksi ak;

    ak.setX("Yogyakarta", "KampusW");

    ak.display();

    return 0;
}   