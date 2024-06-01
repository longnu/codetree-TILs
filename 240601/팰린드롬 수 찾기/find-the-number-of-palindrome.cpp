using namespace std;
int x, y;
int main() {
    cin >> x >> y;

    int answer = 0;
    for(int i=x; i<=y; i++){
        string now = to_string(i);
        string temp;
        
        for(int j=0; j<(int)now.length(); j++){
            temp += now[now.length() - (j + 1)]; 
        }
        
        if(now == temp)
            answer++;
    }

    cout << answer;
    return 0;
}