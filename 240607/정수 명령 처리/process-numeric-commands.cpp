#include <iostream>
#include <stack>
#include <string>

using namespace std;

int n;
stack<int> s;  

int main() {
    // 입력:
    cin >> n;

    for(int i = 0; i < n; i++) {
        string command;
        cin >> command;
        if(command == "push") {
            int x;
            cin >> x;
            s.push(x);
        }
        else if(command == "pop") {
            int v = s.top();
            s.pop();
            cout << v << endl;
        }
        else if(command == "size") {
            cout << s.size() << endl;
        }
        else if(command == "empty") {
            if(s.empty())
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else {
            cout << s.top() << endl;
        }
    }
    return 0;
}