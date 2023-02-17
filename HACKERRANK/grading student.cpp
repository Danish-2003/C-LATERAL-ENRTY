#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int grade;
        cin>>grade;
      //if the grade is less than 38 then we will return the grade as it is.
        if(grade<38){
            cout<<grade<<endl;
            continue;
        }
      //checking if the grade is tha multiple of five and the difference between the nearest multiple of 5 is less than 3,
      //then we will do is that we will round off the grade so it will become multiple of five. 
        if(grade%5==5){
            cout<<grade<<endl;
        }
        else if(grade%5==4){
            cout<<grade+1<<endl;
        }else if(grade%5==3){
            cout<<grade+2<<endl;
        }else if(grade%5==2){
            cout<<grade<<endl;
        }else if(grade%5==1){
            cout<<grade<<endl;
        }else if(grade%5==0){
            cout<<grade<<endl;
        }
    }
    
    
    return 0;
}
