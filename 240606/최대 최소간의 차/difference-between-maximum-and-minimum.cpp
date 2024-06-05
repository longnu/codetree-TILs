#include <iostream>
#include <cstdlib>
#include <algorithm>

#define MAX_N 100
#define MAX_K 10000

using namespace std;
int n, k;   // n개의 수, 최대 최소간의 차이가 k이하
int a[MAX_N];

int main() {
    // 입력:
    cin >> n >> k;
    int cur_min = MAX_K, cur_max = 1;
    for(int i=0; i<n; i++)
        cin >> a[i];
    
    int cost = 0;    // 비용

    while(true){
        // cur_min, cur_max: 현재 배열에서 최소, 최댓값
        // minI, maxI: 그 최소, 최댓값의 인덱스
        int cur_min = MAX_K, minI=0, cur_max = 1, maxI = 0; 
        // 현재 최대/최소값 찾기
        for(int i=0; i<n; i++){
            // n개의 숫자를 보면서
            if(cur_min > a[i]){
                cur_min = a[i];
                minI = i;
            }
            if(cur_max < a[i]){
                cur_max = a[i];
                maxI = i;
            }
        }

        // 현재 배열에서 최댓값, 최솟값 개수 구하기(중복된 숫자가 있을 수 있으니)
        int min_cnt = 0, max_cnt = 0;
        for(int i=0; i<n; i++){
            if(cur_min == a[i]) min_cnt++;
            if(cur_max == a[i]) max_cnt++;
        }

        // 만약 최대-최소 차이가 k이하라면 조건 만족했으므로 반복문 나가기
        if(cur_max - cur_min <= k) break;
        else{
            // 최대, 최소 중 적은 개수부터 변화하기 (비용을 낮추기 위해)
            if(min_cnt >= max_cnt){   // 배열에서 최댓값의 개수가 최솟값의 개수보다 작거나 같다면
                a[maxI]--;                      // 최댓값을 먼저 변화시키기
                cost++;
            }
            else{
                a[minI]++;                    // 최솟값을 먼저 변화시키기
                cost++;
            }
        }
    }
    cout << cost;

    return 0;
}