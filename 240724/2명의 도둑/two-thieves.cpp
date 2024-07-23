#include <iostream>
using namespace std;
int n, m, c;
#define MAX_N 10
#define MAX_M 5
int weight [MAX_N][MAX_N];
int a[MAX_M];

int ans;
int max_val;

void FindMaxSum(int curr_idx, int curr_weight, int curr_val)
{
    if(curr_idx == m)
    {
        max_val = max(max_val, curr_val);
    }
    
    FindMaxSum(curr_idx + 1,  )
}

// 무게의 합이 c를 넘지 않게 하면서 얻을 수 있는 최대 가치를 반환합니다.
int FindMax(int sx, int sy) {
    // 문제를 a[0] ~ a[m - 1]까지 m개의 숫자가 주어졌을 때
    // 적절하게 골라 무게의 합이 c를 넘지 않게 하면서 얻을 수 있는 최대 가치를 
	// 구하는 문제로 바꾸기 위해
    // a 배열을 적절하게 채워넣습니다. 
    for(int i = sy; i <= sy + m - 1; i++)
        a[i - sy] = weight[sx][i];
    
    // 2^m개의 조합에 대해 최적의 값을 구합니다.
    max_val = 0;
    FindMaxSum(0, 0, 0);
    return max_val;
}

bool Intersect(int a, int b, int c, int d)
{
    return c <= b || a <= d;
}

bool IsPossible(int sx1, int sy1, int sx2, int sy2)
{
    if(sx + m -1 >= n || sy + m - 1 >= n)
    {
        return false;
    }

    if(sx1 != sx2)
    {
        return true;
    }

    if(Intersect(sy1, sy1 + m - 1, sy2, sy2 + m -1))
        return false;

    return true;
}



int main() {
    // 입력:
    cin >> n >> m >> c;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) 
            cin >> weight[i][j];

    // 첫 번째 도둑은 (sx1, sy1) ~ (sx1, sy1 + m - 1) 까지 물건을 훔치려 하고
    // 두 번째 도둑은 (sx2, sy2) ~ (sx2, sy2 + m - 1) 까지의 물건을 
    // 훔치려 한다고 했을 때 가능한 모든 위치를 탐색해봅니다.
    for(int sx1 = 0; sx1 < n; sx1++)
        for(int sy1 = 0; sy1 < n; sy1++)
            for(int sx2 = 0; sx2 < n; sx2++)
                for(int sy2 = 0; sy2 < n; sy2++) {
                    // 두 도둑의 위치가 올바른지 판단합니다.
                    // 각 위치에서의 얻을 수 있는 최대 가치의 합을 ans와 
					// 비교하여 갱신합니다.
                    if(Possible(sx1, sy1, sx2, sy2))
                        ans = max(ans, FindMax(sx1, sy1) 
								     + FindMax(sx2, sy2));
                }
    
    // 출력:
    cout << ans;

    return 0;
}