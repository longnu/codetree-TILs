#include <iostream>
#include <algorithm>

#define DIR_NUM 8

using namespace std;

int arr[19][19];

int dx[DIR_NUM] = {1, 1, 1, -1, -1, -1, 0, 0};
int dy[DIR_NUM] = {-1, 0, 1, -1, 0, 1, -1, 1};

int InRange(int x, int y) {
    return 0 <= x && x < 19 && 0 <= y && y < 19;
}

int main(){
    for(int i = 0; i < 19; i++)
    {
        for(int j = 0; j< 19; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < 19; i++)
    {
        for(int j = 0; j< 19; j++)
        {
            for(int k =0; K < DIR_NUM; k++)
            {
                int curt = 1;
                int curx = i;
                int cury = j;
                while(true)
                {
                    int nx = curx + dx[k];
                    int ny = cury + dx[k];
                    if(InRange(nx,ny) == false)
                    {
                        break;
                    }
                    if(arr[nx][ny]!=arr[i][j])
                    {
                        break;
                    }
                    curt++;
                    curx=nx;
                    cury=ny;
                }
            }
            if(curt == 5) {
					cout << arr[i][j] << endl;
					cout << i + 2 * dx[k] + 1 << " " << j + 2 * dy[k] + 1;
					return 0;
				}
        }
    }






}