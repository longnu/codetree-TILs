#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string binary;
    cin >> binary;

    int num  = 0;
    for(int i = 0; i < (int)binary.size(); i++)
    {
        num = num * 2 + (binary[i] - '0');
    }

    cout << num;

    return 0;
}