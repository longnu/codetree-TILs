#include <iostream>
using namespace std;
#include <algorithm>
#include <string>
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    string words[N];

    for(int i = 0; i < N; i++)
    {
        cin >> words[i];
    }

    sort(words, words + N);

    for(int i = 0; i < N; i++)
    {
        cout << words[i] << endl;
    }

    return 0;
}