#include <iostream>
using namespace std;

class C {
private:
    string C1;
    int C2;

public:
    // Gets
    string getC1() { return C1; }
    int getC2() { return C2; }

    // Sets
    void setC1(string c) { C1 = c; }
    void setC2(int c) { C2 = c; }

    // Métodos
    void MC1() {
        cout << "Método MC1()" << endl;
    }

    void MC2() {
        cout << "Método MC2()" << endl;
    }

    void MC3() {
        cout << "Método MC3()" << endl;
    }
};

int main() {
    C obj;
    obj.MC1();
    obj.MC2();
    obj.MC3();
    return 0;
}
