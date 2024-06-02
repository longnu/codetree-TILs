#include <iostream>
#include <algorithm>

using namespace std;

int x1, x2, y1, y2;
int a1, a2, b1, b2;

int main() {
    // 입력:
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> a1 >> b1 >> a2 >> b2;

    // 주어진 값들 중 가장 큰 x에서 가장 작은 x를 뺀 길이가 
    // 세로 길이가 되어야 합니다.
    // 마찬가지 이유로 가장 큰 y에서 가장 작은 y를 뺀 길이가
    // 가로 길이가 되어야 합니다.
    int width = max(x2, a2) - min(x1, a1);
    int height = max(y2, b2) - min(y1, b1);

    cout << width * height;
    return 0;
}