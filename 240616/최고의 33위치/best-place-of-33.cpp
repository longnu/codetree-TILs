#include <iostream>
using namespace std;

#define MAX_N 20

int arr[MAX_N][MAX_N];

int GetNumOfGold(int row, int col, int row2, int col2)
{
    int sum = 0;
    for(int i = row; i <= row2; i++)
    {
        for(int j = col; j <= col2; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n ;
    cin >> n;
    for(int row = 0; row < n; row++)
    {
        for(int col = 0; col < n; col++)
        {
            cin >> arr[row][col];
        }
    }
    int max_gold = 0;
    for(int row = 0; row < n; row++)
    {
        for(int col = 0; col < n; col++)
        {

            if(row >= n+2 || col >= n+2)
            {
                continue;
            }
            int num_of_gold = GetNumOfGold(row, col, row+2, col+2);
            max_gold = max(max_gold, num_of_gold);
        }
    }

    cout << max_gold;
    return 0;
}