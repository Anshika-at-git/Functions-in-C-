#include <iostream>
using namespace std;

int main(){
    int n =5;
    int arr[] = {1, -2, 3, -4};
    int maxSum = INT8_MIN;
    for(int st=0; st<n; st++){
        int currSum = 0;
        for(int end=0; end<st; end++){
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
            }
        }
    }
    cout<<"Maximum subarray sum is = "<<maxSum<<endl;
    return 0;
}