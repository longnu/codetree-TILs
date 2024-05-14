#include <iostream>
using namespace std;
#include <algorithm>

class man{
    public:
    string name;
    string address;
    string region;

    man(string name, string address, string region)
    {
        this->name = name;
        this->address = address;
        this->region = region;
    }
    man(){}
};

#define MAX_N 10

man arr[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.


    int n;
    cin >> n;

    for(int i = 0 ; i < n; i++)
    {
        string name;
        string address;
        string region;

        cin >> name >> address >> region;

        arr[i] = man(name, address, region);
    }

    int min_idx = 0; 
    for(int i = 1 ; i < n; i ++)
    {
        if(arr[min_idx].name < arr[i].name)
        {
            min_idx = i;
        }
    }

    cout << "name "+arr[min_idx].name<<endl;
    cout << "addr "+arr[min_idx].address<<endl;
    cout << "city "+arr[min_idx].region;   


    return 0;
}