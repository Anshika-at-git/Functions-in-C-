#include<iostream>
using namespace std;

int decToBin(int n){
    int ans = 0, pow = 1;
    while(n>0){
        int rem = n%2;
        n = n/2;

        ans += (rem*pow);
        pow *= 10;
    }
    return ans;
}

int main(){
    int n, m;
    cout<<"Starting number: \n"<<"Ending number: \n";
    cin>>n>>m;
    for(int i=n; i<=m; i++){
        cout<<decToBin(i)<<endl;
    }
    return 0;
}