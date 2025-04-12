#include <iostream>
using namespace std;

class B {
private:
    int B1;
    float B2;

public:
    // Gets
    int getB1() { return B1; }
    float getB2() { return B2; }

    // Sets
    void setB1(int b) { B1 = b; }
    void setB2(float b) { B2 = b; }

    // Métodos
    void MB1() {
        cout << "Método MB1()" << endl;
    }

    void MB2() {
        cout << "Método MB2()" << endl;
    }
};

int main() {
    B obj;
    obj.MB1();
    obj.MB2();
    return 0;
}