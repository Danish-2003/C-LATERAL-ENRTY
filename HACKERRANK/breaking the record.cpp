#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
   
    int lowcount =0;
    int highcount =0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int lowest=arr[0];
    int highest=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]<lowest){
            lowcount++;
          
          //to avoid repitition of same element we will update the lower element.
           lowest=arr[i];  
        }   
    }
    for(int i=0; i<n;i++){
        if(arr[i]>highest){
            highcount++;
          
           //to avoid repitition of same element we will update the higher element.
            highest=arr[i];
        }
        
    }
    
    cout<<highcount<<" "<<lowcount<<endl;
    
    return 0;
}
