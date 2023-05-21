#include<iostream>
using namespace std;

void permute(string s, int l, int r){
    if(l==r){
        cout<<s<<endl;
        return;
    }
    for(int i=l;i<=r;i++){
        swap(s[l],s[i]);
        permute(s,l+1,r);
        swap(s[l],s[i]);
    }
}

int main(){
    string s;
    cout<<"Enter the string to find combinations: ";
    cin>>s;
    int l=0, r = s.size()-1;
    permute(s,l,r);

}