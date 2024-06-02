#include <iostream>
#include <climits>
using namespace std;
#define MAX_N 100
int x1[MAX_N];
int x2[MAX_N];

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    int min_length = INT_MAX;

    for(int i = 0; i < n; i++) {
        int minx1 = INT_MAX;
        int maxx2 = INT_MIN;

        for(int j = 0; j < n; j++) {
            if(i == j) continue; // i번째 선분을 제거
            minx1 = min(minx1, x1[j]);
            maxx2 = max(maxx2, x2[j]);
        }
        
        int length = maxx2 - minx1;
        min_length = min(min_length, length);
    }

    cout << min_length << endl;

    return 0;
}