#include<bits/stdc++.h>
using namespace std;
bool comp(int a, int b){
    return a>b;
}
int coin_change(int a[], int n, int amount){
    sort(a,a+n,comp);
    map<int,int> m;
    int i=0;
    int coins = 0;
    for(int i = 0;i<n;i++){
        while(amount>=a[i]){
            amount -=a[i];
            m[a[i]]++;
            coins++;
        }
    }
    cout<<"Coin"<<"\t"<<"Quantity\n";
    for(auto i:m){
        cout<<i.first<<"\t"<<i.second<<"\n";
    }
    return coins;
}



int main(){
    int n;
    cout<<"Enter the number of changes in coins: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Coin "<<i+1<<": ";
        cin>>a[i];
    }
    int amount;
    cout<<"Enter amount :";
    cin>>amount;
    cout<<"Total number of coins"<<coin_change(a,n,amount);

}