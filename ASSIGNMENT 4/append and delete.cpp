#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    int n,count=0;
    cin>>s>>t>>n;
    for(int i=s.size();i!=0;i--){
        if(s[i]!=t[i]){
            s.pop_back();
            count++;
        }
        else if(s[i]==t[i] || s.empty()==true){
            int temp=t[i+1];
            s[i+1]=0;
            s.push_back(temp);
            count++;
            cout<<temp<<endl;
        }
    }
    cout<<count<<" "<<s;
    if(count==n){
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}
