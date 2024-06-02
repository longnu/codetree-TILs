#include <iostream>
#include <climits>
#include <algorithm>
#include <cstdlib>

using namespace std;

int a, b, x, y;

int main() {
    // 입력:
    cin >> a >> b >> x >> y;

    int min_dist = INT_MAX;

    // Case 1. a -> b 바로 이동
    min_dist = min(min_dist, abs(b - a));

    // Case 2. a -> x -> y -> b 순서로 이동
    min_dist = min(min_dist, abs(x - a) + 0 + abs(b - y));

    // Case 3. a -> y -> x -> b 순서로 이동
    min_dist = min(min_dist, abs(y - a) + 0 + abs(b - x));

    cout << min_dist;
    return 0;
}