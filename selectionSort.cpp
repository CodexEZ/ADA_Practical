#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0;i<n;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }

}

int main(){
    int a[] = {1,9,1,6,2,9,3,0,34};
    int n = sizeof(a)/sizeof(a[0]);
    selectionSort(a,n);
    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<endl;
}