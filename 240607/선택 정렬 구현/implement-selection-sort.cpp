#include <iostream>
#define MAX_N 100
using namespace std;
int arr[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for( int i =0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i ++)
    {
        int min = i;
        for(int j = i +1; j <n; j++)
        {
            
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        int tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }

    for(int i =0; i < n; i ++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}