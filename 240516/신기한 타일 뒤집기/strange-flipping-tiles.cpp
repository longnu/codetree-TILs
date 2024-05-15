#include <iostream>
using namespace std;

#define MAX_K 100000
int a[2*MAX_K + 1];
int w, b;

int main() {
    int n, x; 
    char c;

    cin >> n;
    int cur = MAX_K;
    for(int i = 0; i< n; i++)
    {
        cin >> x >> c;
        if ( c == 'L')
        {
            while(x--)
            {
                a[cur] = 1;
                if(x) cur--;
            }
        }
        else
        {
            while(x--)
            {
                a[cur] = 2;
                if(x) cur++;
            }
        }
    }
    
    for(int i = 0; i <= 2*MAX_K + 1; i++)
    {
        if(a[i] == 1) w++;
        if(a[i] == 2) b++;
    }

    cout << w << " " << b;

    return 0;
}