#include<iostream>
using namespace std;

int digitSum(int num){
    int sum=0;
    while(num>0){
        int lastD = num%10;
        num = num/10;
        sum += lastD; 
    }
    return sum;
}

int main(){
    int x = 18923;
    cout<<digitSum(x)<<endl;
    return 0;
}