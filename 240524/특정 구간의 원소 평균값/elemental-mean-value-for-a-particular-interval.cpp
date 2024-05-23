#include <iostream>
using namespace std;
#define MAX_N 100

int arr[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    int n =0;
    cin >> n;

    for(int i = 0; i <n; i++)
    {
        cin >> arr[i];
    }
    int cnt = 0;
    for(int i =0; i < n; i++)
    {
        for(int j = i; j <n; j++)
        {
            int sum = 0;
            
            for(int k = i; k <= j; k++)
            {
                sum = sum + arr[k];
                
            }
            double average = (double)sum / (j-i+1);
            int pass = false;
            for(int k = i; k <= j; k++)
            {
                if(arr[k] == average)
                {
                    pass = true;
                }
            }
            if(pass)
            {
                cnt++;
            }
        }
    }

    cout << cnt;




    return 0;
}