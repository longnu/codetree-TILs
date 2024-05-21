#include <iostream>
using namespace std;
#include <string>
string a;
int N;
#define MAX_N 10

int digit(string a)
{
    int integer = 0;
    for(int i = 0 ; i < (int)a.size(); i++)
    {
        integer = integer * 2 + (a[i] - '0');
    }
    return integer;
}

int main() {
    // 여기에 코드를 작성해주세요.

    cin >> a;

    int maxnum = 0;
    for(int i = 0; i < (int)a.size(); i++)
    {
        a[i] = '0' + '1' - a[i];
        int num = 0;
        num = digit(a);
        maxnum = max(maxnum, num);
        a[i] = '0' + '1' - a[i];
    }

    cout << maxnum;

    

    return 0;
}