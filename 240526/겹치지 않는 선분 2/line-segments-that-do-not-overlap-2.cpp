#include <iostream>
using namespace std;

#define MAX_N 100

int pos_x1[MAX_N];
int pos_x2[MAX_N];

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> pos_x1[i] >> pos_x2[i];
    }

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        bool pass = true;
        for(int j = 0; j < n; j++) {
            if(i == j) continue;
            // Check if the segment [pos_x1[i], pos_x2[i]] is completely within [pos_x1[j], pos_x2[j]]
            if((pos_x1[j] < pos_x1[i] && pos_x2[j] > pos_x2[i])||
            (pos_x1[j] > pos_x1[i] && pos_x2[j] < pos_x2[i])) {
                pass = false;
                break;
            }
        }
        if(pass) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}