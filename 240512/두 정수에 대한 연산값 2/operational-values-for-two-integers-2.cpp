#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b;   
    cin >> a >> b;

    if (a > b)
    {
        a= a*2;
        b = b + 10;
    }
    else
    {
        a = a + 10;
        b = b*2;
    }

    cout << a << " " << b;

    return 0;
}