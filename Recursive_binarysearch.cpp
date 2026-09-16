#include<bits/stdc++.h>
using namespace std;

int binarysearch( int arr[], int lb, int ub, int x)
{
    if(ub>=lb){
        int mid = (lb+ub)/2;

        if(arr[mid] == x){
            return mid;
        }

        if(arr[mid] > x){
            return binarysearch( arr, lb, mid-1, x);
        }

        else {
            return binarysearch( arr, mid+1, ub, x);
        }
    }
    return -1;
}

int main() {
    int arr[] ={ 23, 27, 37, 50, 78, 100, 109};
    int x = 50;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = binarysearch(arr, 0, n-1, x);
    if (result == -1) cout<<"Elementnot found in the array.";
    else cout<<"Element found at index "<< result;
    return 0;
}