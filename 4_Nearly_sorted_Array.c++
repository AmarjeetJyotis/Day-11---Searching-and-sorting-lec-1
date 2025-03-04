#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> arr, int target){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        else if(mid-1>=0 && arr[mid-1]==target){
            return mid-1;
        }
        else if(mid+1<arr.size() && arr[mid+1]==target){
            return mid+1;
        }
        else if(arr[mid]<target){
            s=mid+2;
        }
        else{
            e=mid-2;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    vector<int> arr{10, 3, 30, 50, 70, 80};
    int target=50;
    int ans=binarySearch(arr, target);
    cout<<"Index of "<<target<<" at: "<<ans<<endl;
return 0;
}