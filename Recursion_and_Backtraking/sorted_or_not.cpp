#include<iostream>
#include<vector>
using namespace std;
bool isSort(vector<int>arr,int n, int i=0){

    if(i==n-1){
        return true;
    }
    return arr[i]<=arr[i+1]&&isSort(arr,n,i+1);



}
int main(){
vector<int>nums={1,0,3,4,5};
cout<<isSort(nums,5)<<endl;

return 0;}
