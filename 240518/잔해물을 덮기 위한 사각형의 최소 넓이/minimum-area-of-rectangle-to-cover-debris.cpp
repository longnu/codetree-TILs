#include <iostream>
using namespace std;
int N = 2;
#define MAX_R 1000
int x1[2];
int y1[2];
int x2[2];
int y2[2];
#define OFFSET 1000

int checked[2*MAX_R + 1][2*MAX_R + 1];

int main() {
    // 여기에 코드를 작성해주세요.
    for(int i = 0; i <N; i++)
    {
        cin >> x1[i];
        cin >> y1[i];
        cin >> x2[i];
        cin >> y2[i];

        x1[i]+=OFFSET;
        y1[i]+=OFFSET;
        x2[i]+=OFFSET;
        y2[i]+=OFFSET;

    }

    for(int i = 0; i < N; i++)
        for(int x = x1[i]; x < x2[i]; x++)
            for(int y = y1[i]; y < y2[i]; y++)
                checked[x][y] = i + 1;
    int min_x = 2*MAX_R, max_x = 0, min_y = 2*MAX_R, max_y = 0;
    bool first_rect_exist = false;

    for(int x = 0; x <= 2* MAX_R; x++)
        for(int y = 0; y <= 2*MAX_R; y++)
        {
            if(checked[x][y] == 1){
                first_rect_exist = true;
                min_x = min(min_x, x);
                max_x = max(max_x, x);
                min_y = min(min_y, y);
                max_y = max(max_y, y);
            }
        }

    int area;
    if(!first_rect_exist) area = 0;
    else area = (max_x - min_x + 1) * (max_y - min_y + 1);
    cout << area;
            

    return 0;
}