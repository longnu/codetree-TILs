#include <iostream>
#include <algorithm>
#include <string>

#define MAXN 5

using namespace std;

// 학생들의 정보를 나타내는 클래스 선언
class Student{
    public:
        string name;
        int height;
        double weight;
        Student(string name, int height, double weight) {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
		Student(){}
};

// Custom Comparator
bool Cmp1(Student a, Student b) {
    // 이름을 기준으로 오름차순으로 정렬합니다.
    return a.name < b.name;
}

bool Cmp2(Student a, Student b) {
    // 키를 기준으로 내림차순으로 정렬합니다.
    return a.height > b.height;
}

Student students[MAXN];

int main(){
    for (int i = 0; i < MAXN; i++){
        string name;
        int height;
		double weight;
        cin >> name >> height >> weight;
        // Student 객체를 생성해 리스트에 추가합니다.
		students[i] = Student(name, height, weight);
    }
	
	cout << fixed;
	cout.precision(1);

    // custom comparator를 활용한 정렬 (이름순으로 정렬)
    sort(students, students + MAXN, Cmp1);

    // 이름순으로 정렬한 결과를 출력합니다.
	cout << "name" << endl;
    for (int i = 0; i < MAXN; i++){
        cout << students[i].name << " ";
        cout << students[i].height << " ";
        cout << students[i].weight << endl;
    }
	
	cout << endl;
	
	// custom comparator를 활용한 정렬 (키순으로 정렬)
    sort(students, students + MAXN, Cmp2);

    // 키순으로 정렬한 결과를 출력합니다.
	cout << "height" << endl;
    for (int i = 0; i < MAXN; i++){
        cout << students[i].name << " ";
        cout << students[i].height << " ";
        cout << students[i].weight << endl;
    }

    return 0;
}