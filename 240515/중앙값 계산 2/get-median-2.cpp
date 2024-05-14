#include <iostream>
using namespace std;
#define INT_MAX 100
int arr [INT_MAX];
#include <algorithm>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    cin >> n;



    for(int i = 1 ; i <=  n;  i  ++)
    {
        cin >> arr[i];
        if(i%2 != 0)
        {
            sort(arr, arr+i+1);
            int midnum = (i+1)/2;
            cout<<arr[midnum]<< " ";
        }
    }



    return 0;
}