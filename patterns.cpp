#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j <= n; j++)
        {
            cout << j-i+1 << " ";
        }
        for(int j = 1; j <= 2*i-2; j++)
        {
            cout << "* ";
        }
        for(int j = 1; j <= n-i+1; j++)
        {
            cout << n-j-i+2 << " ";
        }
        cout << endl;
    }


    return 0;
}