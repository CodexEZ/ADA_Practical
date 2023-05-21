#include<iostream>
using namespace std;

int binary(int a[], int low,int high, int target){
    if(low>high){
        return -1;
    }
    else{
        int mid = (low+high)/2;
        if(a[mid]==target)
            return mid;
        else if(a[mid]<target)
            binary(a,mid+1,high, target);
        else
            binary(a, low,mid-1, target);
    }
}

int main(){
    int a[] = {1,2,3,5,6,7,8};
    int n = sizeof(a)/sizeof(a[0]);
    int low =0;
    int high = n-1;
    cout<< binary(a,low,high,99);
}