#include <iostream>

using namespace std;

int main() {
    int value, sum = 0;

    while(cin >> value/* , cin.operator bool() */) {
        sum += value;
    }
    
    cout << sum << endl;
}
