#include <iostream>
using namespace std;
#define MAX_N 1000

int n;
int a[MAX_N];
int arr[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i = 0; i <n-1; i++)
    {
        cin >> a[i];
    }

    for(int i = 1; i <= n; i++)
    {
        arr[0] = i;
        for(int j = 1; j < n; j++)
        {
            arr[j] = a[j-1]-arr[j-1];
        }

        bool satisfied = true;
        bool exist[MAX_N + 1] = {};
        for(int j = 0; j < n; j++) {
            if(arr[j] <= 0 || arr[j] > n)
                satisfied = false;
            else {
                if(exist[arr[j]])
                    satisfied = false;
                exist[arr[j]] = true;
            }
        }

        if(satisfied) {
            for(int j = 0; j < n; j++)
                cout << arr[j] << " ";
            return 0;
        }
        
    }

    
}