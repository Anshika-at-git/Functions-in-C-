#include<iostream>
using namespace std;

int main(){
    int num[8]= {37, 109, 21, 43, 64, 81, 97, 189};
    int n = 8;
    for(int i=0, j=n-1; i<j; i++, j--){
        int temp = num[i];
        num[i] = num[j];
        num[j] = temp;
    }
    cout<<"Reversed array: \n";
    for(int i=0; i<n; i++){
        cout<<num[i]<<" ";
    }
    return 0;
}