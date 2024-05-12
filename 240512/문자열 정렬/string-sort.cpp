#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;
    sort(a.begin(), a.end());
    cout << a;
    return 0;
}