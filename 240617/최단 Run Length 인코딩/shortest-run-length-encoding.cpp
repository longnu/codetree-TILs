#include <iostream>
#include <string>
#include <algorithm> // std::min 사용을 위해 포함

using namespace std;

int main() {
    string a;
    cin >> a;

    int n = a.size();
    int minanswer = 100;

    for (int i = 0; i < n; i++) {
        // 문자열을 오른쪽으로 한 칸 회전
        char temp = a[n - 1];
        for (int j = n - 1; j > 0; j--) {
            a[j] = a[j - 1];
        }
        a[0] = temp;

        // 회전된 문자열을 사용하여 압축 문자열 생성
        int cnt = 1;
        char cur = a[0];
        string hubo = "";

        for (int j = 1; j < a.size(); j++) {
            if (a[j] != a[j - 1]) {
                hubo += cur;
                hubo += to_string(cnt);
                cur = a[j];
                cnt = 1;
            } else {
                cnt++;
            }
        }
        // 마지막 문자와 그 개수를 추가
        hubo += cur;
        hubo += to_string(cnt);

        // 최소 길이 갱신
        minanswer = min(minanswer, (int)hubo.size());
    }
    cout << minanswer;

    return 0;
}