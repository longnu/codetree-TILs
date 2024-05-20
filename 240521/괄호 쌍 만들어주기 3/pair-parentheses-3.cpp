#include <iostream>
using namespace std;
#include <string>
string A;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> A;
    int cnt = 0;
    for(int i = 0; i < A.size(); i++)
    {
        if(A[i] == '(')
        {
            for(int j = i+1; j < A.size(); j++) 
            {
                if(A[j] == ')') cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}