#include<bits/stdc++.h>
using namespace std;
struct Jobs{
    char id;
    int dead;
    int profit;
};
bool comp(Jobs a, Jobs b){
    return a.profit>b.profit;
}
int max_dead(Jobs a[], int n){
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i].dead>max){
            max = a[i].dead;
        }
    }
    return max;
}
void printSeq(Jobs job[], int n , int max){
    vector<char> sequence(max,'-');
    int prof = 0;
    for(int i=0;i<n;i++){
        for(int j=job[i].dead-1;j>=0;j--){
            if(sequence[j]=='-'){
                sequence[j]=job[i].id;
                prof = prof + job[i].profit;
                break;
            }
        }
    }
    cout<<"Job Sequence :";
    for(auto i:sequence){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Total profit "<<prof;
}
void JobSequence(Jobs jobs[], int n){
    sort(jobs,jobs+n,comp);
    int max = max_dead(jobs,n);
    printSeq(jobs, n,max);

}

int main(){
    Jobs jobs[] = {{'a',2,20}, {'b',2,60}, {'c',1,40},{'d',3,100},{'e',4,80},{'f',10,250}};
    int n = 6;
    JobSequence(jobs,n);
    
}