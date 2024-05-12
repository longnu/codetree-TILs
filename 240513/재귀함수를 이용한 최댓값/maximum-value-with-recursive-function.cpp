#include <iostream>
using namespace std;
#define INT_MAX 100

int arr[INT_MAX];
int maxnum = -1;
void recur(int n)
{   
    if(n==-1) 
    {
        cout << maxnum;
        return;    
    }
    maxnum = max(maxnum,arr[n-1]);

    return recur(n-1);
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;
    

    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }

    recur(n);

    return 0;
}