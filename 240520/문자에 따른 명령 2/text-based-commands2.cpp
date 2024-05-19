#include <iostream>
#define DIR_NUM 4

using namespace std;

char LR, F;
int x, y;
int dx[DIR_NUM] = {0, 1, 0, -1};
int dy[DIR_NUM] = {1, 0, -1, 0}; 

int main() {
    // 여기에 코드를 작성해주세요.

    cin >> LR >> F;
    int dir;
    if(LR == 'L')
    {
        dir = (dir - 1 + 4) % 4;
    } 
    else
    {
        dir = (dir + 1) % 4;
    }
    

    x += dx[dir] * 1;
    y += dy[dir] * 1;
    
    
    cout << x << " " << y;

    return 0;
}