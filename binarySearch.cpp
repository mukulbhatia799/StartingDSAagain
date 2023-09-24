#include<bits/stdc++.h>
using namespace std;

int firstOccOfK(int arr[], int n, int k)
{
    int low = 0, high = n-1, mid = 0, ans = -1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] < k) low = mid + 1;
        else if(arr[mid] > k) high = mid - 1;
        else 
        {
            ans = mid;
            high = mid-1;
        }
    }

    return ans;
}

int lastOccOfK(int arr[], int n, int k)
{
    int low = 0, high = n-1, ans = -1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] < k) low = mid + 1;
        else if(arr[mid] > k) high = mid - 1;
        else 
        {
            ans = mid;
            low = mid + 1;
        }
    }

    return ans;
}



int main(){
    int n, k;
    cin >> n >> k;

    int arr[n];

    for(int i = 0; i < n; i++) cin >> arr[i];

    int focc = firstOccOfK(arr, n, k);
    int locc = lastOccOfK(arr, n, k);

    cout << focc << " " << locc << endl;



    return 0;
}