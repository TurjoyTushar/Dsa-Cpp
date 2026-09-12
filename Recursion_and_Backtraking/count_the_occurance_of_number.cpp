#include<bits/stdc++.h>
using namespace std;
void count_occurance(vector<int>nums,int n,int target,int i=1,int j=0,int k=0,int count=1){
 if(i==n){
    cout<<target<<"->"<<count<<endl;
    k=0;
    j=j+1;
    i=j+1;
    target=nums[j];
 }
target=nums[j];
if(nums[i]==target)count++;
count_occurance(nums,n,target,i+1,i)
}





void input_output(vector<int>nums,int n,int i=0){
if(i==n){
        int target=-1;
        count_occurance(nums,n,target);
  return ;
}
cin>>nums[i];
input_output(nums,n,i+1);
}
int main(){
int n;
cin>>n;
vector<int>a(n);
input_output(a,n);



return 0;
}
