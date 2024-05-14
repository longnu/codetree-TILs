#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    int b, c, f;
    char d;
    cin >> a >> d >> b >> d >> c;
    f = b;
    b = c;
    c = f;
    cout << "010" << d << b << d << c;
    return 0;
}