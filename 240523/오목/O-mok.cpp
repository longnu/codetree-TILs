#include <iostream>
using namespace std;
int arr[19][19];

int main() {
    // 여기에 코드를 작성해주세요.

    for(int i = 0; i < 19; i ++)
    {
        for(int j = 0; j < 19; j++)
        {
            cin >> arr[i][j];
        }
    }


    int iszero=true;
    for(int i =0; i< 19 - 4; i++)
    {
        for(int j = 0; j<19 - 4; j++)
        {
            if(arr[i][j] == 1 && arr[i+1][j] == 1 && arr[i+2][j] == 1 && arr[i+3][j] ==1 && arr[i+4][j] ==1)
            {
                cout << 1 << endl;
                cout << i+3 << " " << j+1;
                iszero = false;
            }

            else if(arr[i][j] == 2 && arr[i+1][j] == 2 && arr[i+2][j] == 2 && arr[i+3][j] ==2 && arr[i+4][j] ==2)
            {
                cout << 2 << endl;
                cout << i+3 << " " << j+1;
                iszero = false;
            }

            else if(arr[i][j] == 1 && arr[i][j+1] == 1 && arr[i][j+2] == 1 && arr[i][j+3] ==1 && arr[i][j+4] ==1)
            {
                cout << 1 << endl;
                cout << i+1 << " " << j+3;
                iszero = false;
            }

            else if(arr[i][j] == 2 && arr[i][j+1] == 2 && arr[i][j+2] == 2 && arr[i][j+3] ==2 && arr[i][j+4] ==2)
            {
                cout << 2 << endl;
                cout << i+1 << " " << j+3;
                iszero = false;
            }

            else if(arr[i][j] == 1 && arr[i+1][j+1] == 1 && arr[i+2][j+2] == 1 && arr[i+3][j+3] ==1 && arr[i+4][j+4] ==1)
            {
                cout << 1 << endl;
                cout << i+3 << " " << j+3;
                iszero = false;
            }

            else if(arr[i][j] == 2 && arr[i+1][j+1] == 2 && arr[i+2][j+2] == 2 && arr[i+3][j+3] == 2 && arr[i+4][j+4] == 2)
            {
                cout << 2 << endl;
                cout << i+3 << " " << j+3;
                iszero = false;
            }
        }
    }
    if(iszero)
    {
        cout << 0;
    }
    



    return 0;
}