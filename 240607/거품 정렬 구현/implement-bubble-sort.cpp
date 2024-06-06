#include <iostream>
#define MAX_N 100
using namespace std;
int arr[MAX_N];
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n -1 ; i ++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i ++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}