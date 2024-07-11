#include <iostream>
#include <vector>
using namespace std;

#define MAX_N 20
#define DIR_NUM 4

int grid[MAX_N][MAX_N];
int next_count[MAX_N][MAX_N];
int count[MAX_N][MAX_N];
int n, m, t;

int dx[DIR_NUM] = {-1, 1, 0, 0}; // 상, 하, 좌, 우
int dy[DIR_NUM] = {0, 0, -1, 1};

bool InRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

int main() {
    cin >> n >> m >> t;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    for(int i = 0; i < m; i++) {
        int r, c;
        cin >> r >> c;
        count[r-1][c-1] = 1; // 구슬의 시작 위치 설정
    }

    for(int time = 0; time < t; time++) {
        // 이동 후 새로운 위치에 대한 카운트를 초기화
        fill(&next_count[0][0], &next_count[0][0] + sizeof(next_count) / sizeof(int), 0);
        
        // 모든 구슬의 위치를 확인하고 이동
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                if(count[j][k]) {
                    int maxnum = -1;
                    int max_nj = j, max_nk = k; // 디폴트로 현재 위치
                    
                    for(int l = 0; l < DIR_NUM; l++) {
                        int nj = j + dx[l];
                        int nk = k + dy[l];
                        if(InRange(nj, nk)) {
                            if(grid[nj][nk] > maxnum) {
                                maxnum = grid[nj][nk];
                                max_nj = nj;
                                max_nk = nk;
                            }
                        }
                    }
                    
                    next_count[max_nj][max_nk] += count[j][k];
                }
            }
        }
        
        // 다음 시간의 위치 업데이트 및 충돌 제거
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                if(next_count[j][k] > 1) {
                    next_count[j][k] = 0;
                }
                count[j][k] = next_count[j][k];
            }
        }
    }

    int cnt = 0;
    for(int j = 0; j < n; j++) {
        for(int k = 0; k < n; k++) {
            if(count[j][k] > 0) {
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}