#include <iostream>
#include <string>

using namespace std;

// Product 정보를 나타내는 클래스 선언
class Product{
    public:
        string id;
        int code;
        Product(string id, int code) {
            this->id = id;
            this->code = code;
        }
};

int main(){
    // 첫 번째 Product 객체를 만들어 줍니다.
    Product product1 = Product("codetree", 50);
    
    // 변수 선언 및 입력
    string id2;
    int code2;
    cin >> id2 >> code2;
    
    // 두 번째 Product 객체를 만들어 줍니다.
    Product product2 = Product(id2, code2);

    // 결과를 출력합니다.
    cout << "product " << product1.code << " is " << product1.id << endl;
    cout << "product " << product2.code << " is " << product2.id << endl;
    return 0;
}