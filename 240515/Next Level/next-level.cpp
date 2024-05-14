#include <iostream>
#include <string>

using namespace std;

// User 정보를 나타내는 클래스 선언
class User{
    public:
        string id;
        int level;
        User(string id = "", int level = 0) {
            this->id = id;
            this->level = level;
        }
};

int main(){
    // 초기값을 이용하여 첫 번째 User 객체를 만들어 줍니다.
    User user1 = User();

    // 값을 변경합니다.
    user1.id = "codetree";
    user1.level = 10;
    
    // 변수 선언 및 입력
    string id2;
    int level2;
    cin >> id2 >> level2;
    
    // 초기값을 이용하여 두 번째 User 객체를 만들어 줍니다.
    User user2 = User();

    // 값을 변경합니다.
    user2.id = id2;
    user2.level = level2;

    // 결과를 출력합니다.
    cout << "user " << user1.id << " lv " << user1.level << endl;
    cout << "user " << user2.id << " lv " << user2.level << endl;
    return 0;
}