#include <iostream>
using namespace std;

class A {
private:
    int A1;
    float A2;

public:
    // Gets
    int getA1() { return A1; }
    float getA2() { return A2; }

    // Sets
    void setA1(int a) { A1 = a; }
    void setA2(float a) { A2 = a; }

    // Métodos
    void MA1() {
        cout << "Método MA1()" << endl;
    }

    void MA2() {
        cout << "Método MA2()" << endl;
    }

    void MA3() {
        cout << "Alteração a Classe A a partir do clone" << endl;
    }
};

int main() {
    A obj;
    obj.MA1();
    obj.MA2();
    obj.MA3();
    return 0;
}