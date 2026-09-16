#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int lb, int ub, int x)
{
    while(lb<=ub){
        int mid= (ub+lb)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid] < x) {
            lb=mid+1;
        }
        else {
            ub=mid-1;
        }
    }
    return -1;
}

int main() {
    int arr[] = { 37, 46, 100, 109, 117};
    int x = 27;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = binarySearch( arr, 0, n-1, x);
    if (result == -1) cout<<"Element not present in the array.";
    else cout<<"Element found at index "<< result;
    return 0;
}