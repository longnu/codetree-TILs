#include <iostream>
using namespace std;
#define MAX_N 200
int arr[2*MAX_N];
int main() {
    // 여기에 코드를 작성해주세요.
    int n, t;
    cin >> n >> t;
    for(int i = 0; i < 2*n; i++)
    {
        cin >> arr[i];
    }


    for(int i =0; i < t; i++)
    {
        int temp = arr[2*n - 1];
        for(int j = 2*n-1; j > 0; j--)
        {

            arr[j] = arr[j-1];
            
        }
        arr[0] = temp;
    }

 for(int i =0; i < n ; i ++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
    for(int i =n; i < 2*n ; i ++)
    {
        cout << arr[i] << " " ;
    }   

    return 0;
}