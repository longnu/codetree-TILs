#include <iostream>
using namespace std;

int recur(int N)
{
    if(N==1) return 1;
    if(N==2) return 2;

    return recur(N/3) + recur(N-1);
}

int main() {
    // 여기에 코드를 작성해주세요.

    int N;
    cin >> N;

    cout << recur(N);

    return 0;
}