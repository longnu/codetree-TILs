#include <iostream>
using namespace std;
#define MAX_N 100
int arr[MAX_N+1];
int x1[MAX_N+1];
int x2[MAX_N+1];

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    cin >> n;
    for(int i = 0; i < n; i ++)
    {
        cin >> x1[i];
        cin >> x2[i];
    }
    bool pass = false;
    for(int i = 0; i < n; i++)
    {
        int maxx1 = 0;
        int minx2 = 100;
        for(int j = 0; j < n; j++)
        {
            if(i==j) continue;
            maxx1 = max(maxx1, x1[j]);
            minx2 = min(minx2, x2[j]);
        }
        if(minx2 > maxx1)
        {
            pass = false;
        }
        else
        {
            pass = true;
            break;
        }
    }
    if(pass = true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    

    return 0;
}