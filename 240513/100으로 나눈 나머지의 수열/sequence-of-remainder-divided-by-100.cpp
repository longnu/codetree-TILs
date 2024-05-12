#include <iostream>
using namespace std;

int fib(int N)
{
    if(N==0)
    {
        return 2;
    }

    if(N==1)
    {
        return 4;
    }

    return (fib(N-2) * fib(N-1)) % 100;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N = 0;
    cin >> N;

    cout << fib(N-1);
    return 0;
}