#include <iostream>

using namespace std;

int i = 0;

int main() {

    auto &x = i;
    int a = 10;
    decltype(x) b = a;

    cout << typeid(x).name() << endl;
    cout << typeid(b).name() << endl;
}