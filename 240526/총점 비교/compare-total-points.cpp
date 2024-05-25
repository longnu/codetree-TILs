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
    // 세 점수의 합이 오름차순이 되도록 정렬합니다.
    return a.korean + a.english + a.math < 
           b.korean + b.english + b.math;
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