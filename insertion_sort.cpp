#include<iostream>
using namespace std;

void selection(int arr[], int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main(){
    int n;
    cout<<"Enter length of array :";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i<<"th element :";
        cin>>a[i];
    }
    selection(a,n);
    cout<<"Sorted Array is"<<endl;
    for(auto i:a){
        cout<<i<<",";
    }
    cout<<endl;
}