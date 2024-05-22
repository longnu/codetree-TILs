#include <iostream>
#include <string>
using namespace std;
int n;
string s;
int main() {
    cin >> n;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            for(int k = j+1; k < n; k++)
            {
                if(s[i] == 'C' && s[j] == 'O' && s[k] == 'W')
                {
                    cnt++;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}