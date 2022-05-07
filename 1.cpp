#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 1, b = 100, guess;
    srand(time(0));
    int ans = rand() % (b - a + 1) + a;
    do{
        cin >> guess;
        if (guess < ans)
            cout << "Too small" << endl;
        if (guess > ans)
            cout << "Too large" << endl;
    } while (guess != ans);
    cout << "You are right!" << endl;
    return 0;
}