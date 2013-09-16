#include <iostream>

using namespace std;

class IO {
    int a;

    __IO() {
        return this;
    }
};

int main() {
    cout << "Hellow, world!" << endl;

    return 0;
}
