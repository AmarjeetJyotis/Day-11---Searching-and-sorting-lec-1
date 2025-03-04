#include<iostream>
#include<cmath>
using namespace std;

int solve(int dividend, int divisior){
    int s=0;
    int e=abs(dividend);
    int mid=s+(e-s)/2;
    int ans=0;

    while(s<=e){
        if(abs(mid*divisior)==abs(dividend)){
            ans = mid;
            break;
        }
        else if(abs(mid*divisior)>abs(dividend)){
            // left search
            e=mid-1;
        }
        else{
            // Right search
            // Store the answer
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    if(divisior<0 && dividend<0 || divisior>0 && dividend>0){
        return ans;
    }
    else{
        return -ans;
    }
}

int main(){
    int dividend=28;
    int divisior=-7;
    int ans=solve(dividend, divisior);
    cout<<"Answer is: "<<ans<<endl;
return 0;
}