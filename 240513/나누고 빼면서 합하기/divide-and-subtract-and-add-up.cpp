#include <iostream>
using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int answer = 0;
    while(m!=0)
    {
        if(m%2 == 0)
        {
            answer = answer + arr[m-1];
            m=m/2;
        }
        else
        {
            answer = answer + arr[m-1];
            m=m-1;
        }
    }

    cout << answer;

    return 0;
}