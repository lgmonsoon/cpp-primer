#include <iostream>

using namespace std;

int main() {
    const int a = 1;
    const int& ra = a;
    int* ptra = const_cast<int*>(&a);
    *ptra = 10;
    cout << *(&a)  << " " << ra  << " " << *ptra << " " << a << endl;
    /* a = 1, compiler 优化替换, undefined behavior */

    int b = 1;
    const int& rb = b;
    const int* ptrb = &b;
    int* pptrb = const_cast<int*>(ptrb);
    *pptrb = 10;
    cout << b << " " << rb << " " << *ptrb << " " <<  *pptrb << " " << *(&a) << endl;
}