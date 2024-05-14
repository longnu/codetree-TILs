#include <iostream>
#include <string>
using namespace std;

class classclass
{
    public:
    string code;
    char color;
    int cho;

    classclass(string code, char color, int cho)
    {
        this->code = code;
        this->color = color;
        this->cho = cho;
    }
};

int main() {
    // 여기에 코드를 작성해주세요.

    string code;
    char color;
    int cho;

    cin >> code >> color >> cho;

    classclass b = classclass(code, color, cho);

    cout << "code : " << b.code <<endl;
    cout << "color : "<< b. color<<endl;
    cout << "second : "<<b.cho<<endl; 


    return 0;
}