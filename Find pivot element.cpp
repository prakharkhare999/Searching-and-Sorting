#include<iostream>
#include<vector>
using namespace std;
int pivot(vector<int>p){
    int s=0;
    int e=p.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(mid+1<p.size() && p[mid]>p[mid+1]){
            return mid;
        }
        if(mid-1>=0 && p[mid-1]>p[mid]){
            return mid-1;
        }
        if(p[s]>=p[mid]){
            e=mid-1;
        }
        else {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }

return -1;
}
int main(){
    vector<int>arr{5,6,7,1,2,3,4};
    int result=pivot(arr);
    cout<<result;
}
