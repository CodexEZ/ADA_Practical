#include<iostream>
using namespace std;

void Bubble(int a[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }
    }
}

int main(){
    int a[] = {1,9,1,6,2,9,3,0,34};
    int n = sizeof(a)/sizeof(a[0]);
    Bubble(a,n);
    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<endl;
}