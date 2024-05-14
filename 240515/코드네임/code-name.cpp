#include <iostream>

#define MAX_N 5

using namespace std;

class User
{
    public:
        char codename;
        int score;
        User(char codename, int score){
            this->codename = codename;
            this->score = score;
        }
        User(){}
};

User users[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    for(int i = 0 ; i < MAX_N; i++)
    {
        char codename;
        int score;
        cin >> codename >> score;

        users[i] = User(codename, score);
    }

    int min_idx = 0;
    for(int i = 1; i < MAX_N; i++)
    {
        if(users[min_idx].score > users[i].score )
        {
            min_idx = i;
        }
    }

    cout << users[min_idx].codename << " " << users[min_idx].score;



    return 0;
}