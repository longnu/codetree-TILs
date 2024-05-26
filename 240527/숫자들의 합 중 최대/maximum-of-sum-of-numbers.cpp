#include <iostream>
using namespace std;

int jarihab(int x)
{   int sum = 0;
    while(x > 0)
    {
        sum += x%10;
        x = x/10;
    }
    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int x, y;
    cin >> x;
    cin >> y;

    int maxnum = 0;
    for(int i = x; i <= y; i++)
    {
        maxnum = max(maxnum, jarihab(i));
    }
    cout << maxnum;
    return 0;
}