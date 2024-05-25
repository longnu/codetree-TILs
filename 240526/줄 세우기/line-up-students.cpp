#include <iostream>
#include <algorithm>

#define MAXN 1000

using namespace std;

// 학생들의 정보를 나타내는 클래스 선언
class Student{
    public:
        int height;
        int weight;
        int number;
        Student(int height, int weight, int number) {
            this->height = height;
            this->weight = weight;
            this->number = number;
        }
		Student(){}
};

// Custom Comparator
bool Cmp(Student a, Student b) {
    // 키가 크면 정렬 했을 때 앞에 와야 합니다.
    if(a.height != b.height)
        return a.height > b.height;
    // 몸무게가 크면 정렬 했을 때 앞에 와야합니다.
    if(a.weight != b.weight)
        return a.weight > b.weight;
    // 번호가 작으면 앞에 와야 합니다.
    return a.number < b.number;
}

Student students[MAXN];

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int height, weight;
        cin >> height >> weight;
        // Student 객체를 생성해 리스트에 추가합니다.
        students[i] = Student(height, weight, i+1);
    }

    // custom comparator를 활용한 정렬
    sort(students, students + n, Cmp);

    // 결과를 출력합니다.
    for (int i = 0; i < n; i++){
        cout << students[i].height << " ";
        cout << students[i].weight << " ";
        cout << students[i].number << endl;
    }

    return 0;
}