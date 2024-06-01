#include <iostream>
using namespace std;
#define MAX_N 100

int arr[MAX_N];
int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    for(int i=0; i < n; i ++)
    {
        cin >> arr[i]; 
    }
    int ans = 0;
    
    for(int i = 0 ; i< n; i++)
    {
        int sum = 0;
        int elem = arr[i];
        for(int j = 0; j < m; j ++)
        {
            sum = sum + elem;
            elem = arr[elem-1];
        }
        ans = max(ans, sum);
    }

    cout << ans;

    return 0;
}