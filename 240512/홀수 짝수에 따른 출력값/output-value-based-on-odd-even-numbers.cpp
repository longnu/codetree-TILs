#include <iostream>
using namespace std;

int recur(int N)
{
    if(N == 0) return 0;
    if(N == 1) return 1;
    return recur(N-2) + N;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;

    int answer = recur(N);
    cout << answer;

    return 0;
}