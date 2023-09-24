#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int findele)
{
    int low = 0, high = n-1;
    while(low <= high)
    {
        // int mid = (low + high) / 2;
        int mid = low + (high-low)/2;
        /*
            As int max value is 2^31-1. so, low and high both are int and suppose the low and high so adding 
            them can be out of range to store in mid. So, 
            we can use some maths tricks like (low + (high-low)/2) is same as (low+high)/2.
        */ 
       
        if(arr[mid] == findele) return mid;
        else if(arr[mid] < findele) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main(){
    int n, findele;
    cin >> n >> findele;

    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int index = binarySearch(arr, n, findele);
    if(index == -1) cout << "Value not found" << endl;
    else cout << "Value found at " << index << " index." << endl; 


    return 0;
}