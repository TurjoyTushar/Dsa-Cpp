#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>nums,int target,int st,int last){
    if(st<=last){
            int mid=st+(last-st)/2;
        if(nums[mid]==target){
            return mid+1;
        }
        else if(nums[mid]>target){
            return binarySearch(nums,target,st,mid-1);
        }
        else{
            return binarySearch(nums,target,mid+1,last);
        }
    }
    return -1;

}

int main(){
vector<int>nums={1,2,3,4,5,6,7,8};
int target=9;
int st=0;
int last=nums.size()-1;
cout<<binarySearch(nums,target,st,last)<<endl;


return 0;}
