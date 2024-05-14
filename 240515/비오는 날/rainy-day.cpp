#include <iostream>
using namespace std;

class data{
    public:
    string date;
    string day;
    string weather;

    data(string date, string day, string weather){
        this->date = date;
        this->day = day;
        this->weather = weather;
    }

    data(){}
};

#define MAX_N 100

data arr[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        string date;
        string day;
        string weather;

        cin >> date >> day >> weather;
    
        arr[i] = data(date, day, weather);
    }

    
    int min_num = -1;

    data arr2[n];

    for(int i = 0 ; i < n; i ++)
    {   //cout<<arr[i].date<<endl;
        if(arr[i].weather=="Rain")
        {
            arr2[i] = arr[i]; 
        }
    }

    for(int )

    cout << arr[min_num].date << " " << arr[min_num].day << " " <<arr[min_num].weather;


    return 0;
}