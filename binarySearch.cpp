/* 
Find the target element in nearly sorted array.
Using binary search we can solve this ques in O(logn) time complexity.
eg: suppose the sorted array is 10 20 30 40 50 60 70. Now in nearly sorted array 
each element can be at (mid-1)th, mid or (mid+1)th index like:
nearly sorted array: 20 10 30 50 40 70 60
*/

#include<iostream>
using namespace std;

int FindTargetElementInNearlySortedArray(int* arr, int n, int target)
{
    int low = 0, high = n-1;
    while(low < high)
    {
        int mid = low + (high - low)/2;
        if(arr[mid] == target) return mid;
        else if(mid-1 >= 0 && arr[mid-1] == target) return mid-1;
        else if(mid+1 < n && arr[mid+1] == target) return mid+1;
        else if(arr[mid] < target) low = mid+1;
        else high = mid-1;
        cout << "mid: " << mid << endl;
    }
    return -1;
}

int main(){
    int n, target;
    cin >> n >> target;

    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int ans = FindTargetElementInNearlySortedArray(arr, n, target);
    if(ans != -1)
        cout << "So, target element found at index " << ans << endl;
    else 
        cout << "Target element not found." << endl;

    return 0;
}