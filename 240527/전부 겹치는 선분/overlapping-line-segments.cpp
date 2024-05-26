#include <iostream>
using namespace std;
#define MAX_N 100
int arr[MAX_N + 1];

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x1, x2;
        cin >> x1 >> x2;
        for(int i = x1; i <= x2; i++)
        {
            arr[i]++;
        }
    }
    int pass = false;
    for(int i = 0; i < MAX_N+1; i ++)
    {
        if(arr[i] == n)
        {
            pass = true;
            break;
        }
    }
    if(pass == true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}