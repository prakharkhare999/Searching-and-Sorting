// use bianary search
#include<iostream>
#include<vector>
using namespace std;
int lastoccurence(vector<int>p,int target){
int s=0;
int e=p.size()-1;
int mid=s+(e-s)/2;
int ans=-1;
while(s<=e){
    if(p[mid]==target){
        ans=mid;
        s=mid+1;
    }
    else if(p[mid]>target){
        e=mid-1;
    }
    else if(p[mid]<target){
        s=mid+1;
    }
    mid=s+(e-s)/2;
}
return ans;
}




int main(){
    vector<int>p{2,3,5,4,4,4,4,5};
int target=4;
int s=lastoccurence(p,target);
cout<<s;

}
