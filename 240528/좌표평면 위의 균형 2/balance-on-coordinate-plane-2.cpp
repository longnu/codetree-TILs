#include <iostream>
#include <climits>
#define MAX_N 100
#define MAX_X 100
using namespace std;

int posx[MAX_N];
int posy[MAX_N];

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> posx[i] >> posy[i];
    }

    int answer = INT_MAX;  // 매우 큰 값으로 초기화합니다.

    for (int i = 0; i <= MAX_X; i += 2) {
        for (int j = 0; j <= MAX_X; j += 2) {
            int one = 0, two = 0, three = 0, four = 0;
            for (int k = 0; k < n; k++) {
                if (posx[k] > i && posy[k] > j) {
                    one++;
                } else if (posx[k] < i && posy[k] > j) {
                    two++;
                } else if (posx[k] < i && posy[k] < j) {
                    three++;
                } else if (posx[k] > i && posy[k] < j) {
                    four++;
                }
            }
            int maxnum = max(max(one, two), max(three, four));
            answer = min(answer, maxnum);
        }
    }

    cout << answer << endl;

    return 0;
}