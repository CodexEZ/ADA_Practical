#include<bits/stdc++.h>

using namespace std;

struct Item{
    int profit, weight;
    Item (int profit,int weight){
        this->profit = profit;
        this->weight = weight;
    }
};
bool comp(Item a, Item b){
    double r1 = a.profit/a.weight;
    double r2 = b.profit/b.weight;
    return r1>r2;
}
int fractionalKnapsack(int w, Item arr[] , int n){
    sort(arr,arr+n,comp);
    double ans = 0.0;
    for(int i=0;i<n;i++){
        if(arr[i].weight<w){
            ans = ans + arr[i].profit;
            w = w - arr[i].weight;
        }
        else{
            ans = ans+(arr[i].profit*((double)w/(double)arr[i].weight));
            break;
        }
    }
    return ans;

}
int main(){
    int W = 50;
    Item arr[] = { { 60, 10 }, { 100, 20 }, { 120, 30 } };
    int N = sizeof(arr) / sizeof(arr[0]);
 
    // Function call
    cout << fractionalKnapsack(W, arr, N);
    return 0;
}