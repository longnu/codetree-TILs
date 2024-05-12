#include <iostream>
using namespace std;

int facto(int N)
{
    if(N==1) return 1;
    return facto(N-1) * N;
}

int main() {
    int N;
    cin >> N;
    int answer = facto(N);
    cout << answer;
    return 0;
}