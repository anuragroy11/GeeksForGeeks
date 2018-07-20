#include<bits/stdc++.h>

using namespace std;

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1)
        return 0;
        int arr[n];
        
        for(int i=0;i<n;i++)
        cin>>arr[i];
        
        int leftmax[n];
        int rightmin[n];
        int leftmin[n],rightmax[n];
        
        leftmax[0]=arr[0];
        leftmin[0]=arr[0];
        
        for(int i=1;i<n;i++){
        leftmax[i]=max(arr[i],leftmax[i-1]+arr[i]);
        leftmin[i]=min(arr[i],leftmin[i-1]+arr[i]);
        }
        rightmin[n-1]=arr[n-1];
        rightmax[n-1]=arr[n-1];
        
        for(int i=n-2;i>=0;i--){
            rightmin[i]=min(arr[i],arr[i]+rightmin[i+1]);
            rightmax[i]=max(arr[i],arr[i]+rightmax[i+1]);
        }
        int ans=INT_MIN;
        
        for(int i=0;i<n-1;i++){
            ans=max(ans,leftmax[i]-rightmin[i+1]);
        }
        for(int i=n-1;i>0;i--)
        ans=max(ans,rightmax[i]-leftmin[i-1]);
        
     cout<<ans<<endl;   
    }
    return 0;
}