#include<iostream>
using namespace std;

int linsearch(int a[],int n, int k){
    for(int i=0;i<n;i++){
        if(a[i]==k){
            return i;
        }
    }
    return -1;
}

int main(){
    int a[]={1,2,4,5,6,10,13,0};
    cout<<linsearch(a,8,90);
}