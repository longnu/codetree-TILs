#include <iostream>
using namespace std;
#define MAX_N 100
int arr[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    int n; cin >> n;
    for(int i =0; i < n; i++)
    {
        cin >>arr[i];
    }

    for(int i = 1; i < n; i ++)
    {
        int j = i -1;
        int key = arr[i];
        while(j>=0 && arr[j]> key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
}

    for(int i = 0; i < n;  i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}