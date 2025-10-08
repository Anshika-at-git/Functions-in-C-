#include<iostream>
using namespace std;

int decToBin(int N){
    int ans = 0;
    int pow = 1;
    while(N>0){
        int rem = N%2;
        N = N/2;
        ans += (rem*pow);
        pow *= 10;
    }
    return ans;
}

int main(){
    int decN;
    cout<<"Enter a decimal number: ";
    cin>>decN;
    cout<<decToBin(decN)<<endl;
    return 0;
}