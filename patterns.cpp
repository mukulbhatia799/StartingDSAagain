#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        char c = 'A';
        for(int j = 1; j <= n; j++)
        {
            char ch = c + j + i - 2;
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}