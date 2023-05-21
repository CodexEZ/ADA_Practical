#include<iostream>
using namespace std;
void randomize(int a[], int n){
    int random = rand()%n;
    swap(a[0],a[random]);
}
int partition(int a[], int low, int high){
    int s = low-1;
    int pivot = a[high];
    int i;
    for(i=low;i<high;i++){
        if(a[i]<pivot){
            swap(a[i],a[++s]);
        }
    }
    swap(a[s+1],a[high]);
    return s+1;
}
void quickSort(int a[], int low, int high){
    if(low<high){
        int pivot = partition(a, low, high);
        quickSort(a,low, pivot-1);
        quickSort(a,pivot+1,high);
    }
}
void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[]={1,2,3,4,5,6};
    int high = (sizeof(a)/sizeof(a[0]))-1;
    int low = 0;
    randomize(a, high+1);
    print(a,high+1);
    quickSort(a,low,high);
    print(a,high+1);
}