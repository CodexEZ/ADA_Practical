#include<bits/stdc++.h>
using namespace std;

int power(int base, int exp){
    if(exp==0){
        return 1;
    }
    int halfexp = exp/2;
    int halfpower = power(base, halfexp);
    int result = halfpower * halfpower;
    if(exp%2==1){
        result*=base;
    }
    return result;
}
int main(){
    int base,exp;
    cin>>base>>exp;
    cout<<power(base,exp);
}