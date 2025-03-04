#include<iostream>
using namespace std;
int findSquareElement(int n){
    int target=n;
    int s=0;
    int e=n-1;
    int mid=s +(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(mid*mid==target){
            return mid;
        }
        else if(mid*mid>target){
            e=mid-1;
        }
        else{
            // if less then first store the answer the print 
            ans=mid;
            s=mid+1;
        }
        mid=s + (e-s)/2;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    int ans=findSquareElement(n);
    cout<<"Ans is: "<<ans<<endl;
return 0;
}