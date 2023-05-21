#include<iostream>
using namespace std;

void toh(int n, char beg, char end, char aux){
    if(n==1){
        cout<<"Moving 1 disk from " <<beg<<" to "<<end<<endl; 
        return;
    }
    toh(n-1,beg, aux, end);
    cout<<"Moving "<<n-1<<" disks from "<<beg<<" to "<<end<<endl;
    toh(n-1, aux, end, beg);
}

int main(){
    toh(3,'A','C','B');
}