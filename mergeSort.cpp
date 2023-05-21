#include<iostream>

using namespace std;
void merge(int a[], int low, int mid, int high){
    int subOne = mid-low+1;
    int subTwo = high-mid;
    int left[subOne];
    int right[subTwo];
    int indexOne=0,indexTwo=0, indexMerge = low;
    for(int i=0;i<subOne;i++){
        left[i] = a[low+i];
    }
    for(int i=0;i<subTwo;i++){
        right[i]=a[mid+1+i];
    }
    while(indexOne<subOne && indexTwo<subTwo){
        if(left[indexOne]<right[indexTwo]){
            a[indexMerge] = left[indexOne++]; 
        }
        else{
            a[indexMerge]=right[indexTwo++];
        }
        indexMerge++;
    }
    while(indexOne<subOne){
        a[indexMerge++]=left[indexOne++];
    }
    while(indexTwo<subTwo){
        a[indexMerge++]=right[indexTwo++];
    }


}
void mergeS(int a[], int low , int high){
    if(low<high){
        int mid = (low+high)/2;
        mergeS(a,low,mid);
        mergeS(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
int main(){
    int a[]={2,4,1,3,0};
    mergeS(a,0,4);
    for(auto i:a){
        cout<<i<<' ';
    }
}