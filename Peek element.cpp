#include<iostream>
#include<vector>
using namespace std;
int peek(vector<int>p){
int s=0;
int e=p.size()-1;
int mid=s+(e-s)/2;
while(s<e){
    if(p[mid]<p[mid+1]){
s=mid+1;
    }
    else if(p[mid]>p[mid+1]){
        e=mid;
    }
    mid=s+(e-s)/2;
}
return s;
}
int main(){
    vector<int>p{0,10,5,2};
    int ans=peek(p);
    cout<<ans;
}
