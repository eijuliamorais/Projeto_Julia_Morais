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


    void MD3() {
        cout << "Método MD3()" << endl;
    }

    void MD4() {
    cout << "Método MD4()" << endl;
    }


};

int main() {
    D obj;
    obj.MD1();
    obj.MD2();
    obj.MD3();
    obj.MD4();

    return 0;
}
