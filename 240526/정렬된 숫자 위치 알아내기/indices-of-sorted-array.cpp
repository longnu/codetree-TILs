#include <iostream>
#include <algorithm>

#define MAX_NUM 1000

using namespace std;

// 클래스 선언: 
class Number{
    public:
        int number;
        int index;
        Number(int number, int index) {
            this->number = number;
            this->index = index;
        }
		Number(){}
};

// Custom Comparator
bool Cmp(Number a, Number b) {
    if(a.number != b.number)
        return a.number < b.number;
    return a.index < b.index;
}

Number numbers[MAX_NUM];

int main() {
    // 변수 선언:
    int n, num_cache;
    int answer[MAX_NUM];

    // 입력:
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num_cache;
        numbers[i] = Number(num_cache, i);
    }

    // Custom Comparator를 활용한 정렬:
    sort(numbers, numbers + n, Cmp);

    // 정렬된 숫자들의 원래 인덱스를 활용한 정답 배열 저장:
    for(int i = 0; i < n; i++) 
        answer[numbers[i].index] = i + 1; // 인덱스 보정

    // 출력:
    for(int i = 0; i < n; i++){
        cout << answer[i] << " ";
    }

    return 0;
}