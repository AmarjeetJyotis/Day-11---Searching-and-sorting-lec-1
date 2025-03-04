#include<iostream>
using namespace std;
int findSquareElement(int n){
    int target=n;
    int s=0;
    int e=n-1;
    int mid = s +(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(mid*mid==target){
            return mid;
        }
        else if(mid*mid>target){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}
int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    int ans=findSquareElement(n);
    cout<<"Answer is: "<<ans<<endl;
    
    int precision;
    cout<<"Eneter the value of floating number in precision is:"<<endl;
    cin>>precision;

    double finalAns=ans;
    double step=0.1;

    for(int i=0; i<precision; i++){
        for(double j=finalAns; j*j<=n; j=j+step){
            finalAns=j;
        }
        step=step/10;
    }
    cout<<"Final Answer is: "<<finalAns<<endl;
return 0;
}