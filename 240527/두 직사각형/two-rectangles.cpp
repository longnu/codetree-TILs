#include <iostream>
using namespace std;
#define MAX_R 100

//int x1[MAX_R + 1];
//int x2[MAX_R + 1];
//int y1[MAX_R + 1];
//int y2[MAX_R + 1];

int main() {
    // 여기에 코드를 작성해주세요.
    int x1, x2, y1, y2, a1, a2, b1, b2;
    cin >> x1 >> x2 >> y1 >> y2 >> a1 >> a2 >> b1 >> b2;

    if(x1 > a2 || a1 > x2 || y1 > b2 || b1 > y2)
    {
        cout << "nonoverlapping";
    }
    else
    {
        cout << "overlapping";
    }
    return 0;
}