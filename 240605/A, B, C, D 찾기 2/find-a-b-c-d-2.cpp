#include <iostream>
#include <string>
#include <algorithm>

#define MAX_A 40
#define MAX_N 15

using namespace std;

int arr[MAX_N];

int main() {
    // 입력
    for(int i = 0; i < MAX_N; i++)
        cin >> arr[i];
    
    // 모든 a, b, c, d를 확인해서
    // 이 합들이 arr과 같은지 여부를 확인합니다.
    for(int a = 1; a <= MAX_A; a++)
        for(int b = a; b <= MAX_A; b++)
            for(int c = b; c <= MAX_A; c++)
                for(int d = c; d <= MAX_A; d++) {
                    int arr2[MAX_N] = {a, b, c, d, a + b, b + c, c + d, d + a,
                    a + c, b + d, a + b + c, a + b + d, a + c + d, b + c + d,
                    a + b + c + d};

                    sort(arr2, arr2 + MAX_N);
                    sort(arr, arr + MAX_N);

                    // issame : arr과 arr2배열이 완전히 같을 경우 true
                    bool issame = true;

                    for(int i = 0; i < MAX_N; i++)
                        if(arr[i] != arr2[i])
                            issame = false;
                    
                    // 만약 두 배열이 완전히 같다면 a, b, c, d조합을 찾아냈습니다.
                    if(issame)
                        printf("%d %d %d %d", a, b, c, d);
                }

    return 0;
}