#include <iostream>
#include <algorithm>

#define MAX_N 100

using namespace std;

int n;

int a[MAX_N + 1];

int main() {
    // 입력
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    
    // 새로운 배열을 만들어 정렬하고
    // 2번째로 작은 숫자를 찾아냅니다.
    int myarr[MAX_N + 1] = {};
    for(int i = 1; i <= n; i++)
        myarr[i] = a[i];
    sort(myarr + 1, myarr + n + 1);
    
    // isexist : 2번째로 작은 숫자가 존재하면 true
    bool isexist = false;
    int low2 = 0;
    for(int i = 1; i <= n; i++) {
        // 가장 처음으로 myarr[1]과 다른 숫자는
        // 2번째로 작은 숫자라고 할 수 있습니다.
        if(myarr[i] != myarr[1]) {
            low2 = myarr[i];
            isexist = true;
            break;
        }
    }

    // 2번째로 작은 숫자가 존재하지 않을 때
    if(isexist == false) {
        cout << -1;
        return 0;
    }

    int ansidx = -1;
    for(int i = 1; i <= n; i++) {
        if(a[i] == low2) {
            // 2번째로 작은 숫자가 여러 개 있을 때
            if(ansidx != -1) {
                cout << -1;
                return 0;
            }

            ansidx = i;
        }
    }

    cout << ansidx;

    return 0;
}