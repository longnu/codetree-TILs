#include <iostream>
using namespace std;

int n, m, k;

#define MAX_K 4
#define MAX_N 12

int turn[MAX_N];
int mal[MAX_K];

int ans;

int calc() {
	int score = 0;
	for(int i = 0; i < k; i++)
		score += (mal[i] >= m);
    
	return score;
}

void recur(int step)
{
    ans = max(ans, calc());
    if(step == n)
    {
        
        return; // Ensure we stop recursion here
    }

    for(int i = 0; i < k; i++)
    {
        mal[i] += turn[step];
        recur(step+1);
        mal[i] -= turn[step];
    }
}

int main() {
    // 여기에 코드를 작성해주세요.

    cin >> n >> m >> k;
    for(int i = 0; i < n; i ++)
    {
        cin >> turn[i];
    }

    for(int i = 0; i < k; i++)
		mal[i] = 1;

    ans = 0;
    recur(0);

    cout << ans << endl;

    return 0;
}