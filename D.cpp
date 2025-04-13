#include <iostream>
using namespace std;

class D {
private:
    int D1;
    float D2;

public:
    void MD1() {
        cout << "Método MD1()" << endl;
    }

    void MD2() {
        cout << "Método MD2()" << endl;
    }
};

int main() {
    D obj;
    obj.MD1();
    obj.MD2();
    return 0;
}
