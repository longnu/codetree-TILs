#include <iostream>
#include <algorithm>
#include <string>

#define MAXN 10

using namespace std;

// 학생들의 정보를 나타내는 클래스 선언
class Student{
    public:
        string name;
        int korean;
        int english;
        int math;
        Student(string name, int korean, int english, int math) {
            this->name = name;
            this->korean = korean;
            this->english = english;
            this->math = math;
        }
		Student(){}
};

// Custom Comparator
bool Cmp(Student a, Student b) {
    // 국어 점수가 높으면 정렬 했을 때 앞에 와야 합니다.
    if(a.korean != b.korean)
        return a.korean > b.korean;
    // 영어 점수가 높으면 정렬 했을 때 앞에 와야 합니다.
    if(a.english != b.english)
        return a.english > b.english;
    // 수학 점수가 높으면 정렬 했을 때 앞에 와야 합니다.
    return a.math > b.math;
}

Student students[MAXN];

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        string name;
        int korean, english, math;
        cin >> name >> korean >> english >> math;
        // Student 객체를 생성해 리스트에 추가합니다.
        students[i] = Student(name, korean, english, math);
    }

    // custom comparator를 활용한 정렬
    sort(students, students + n, Cmp);

    // 결과를 출력합니다.
    for (int i = 0; i < n; i++){
        cout << students[i].name << " ";
        cout << students[i].korean << " ";
        cout << students[i].english << " ";
        cout << students[i].math << endl;
    }

    return 0;
}