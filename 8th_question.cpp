#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int count=0;
cin>>n;
cout<<"Number is: "<<n<<endl;
if(n<=1){
    cout<<"Number is not Prime";
}else{
    for(int i=1;i<=n;i++){
        if (n % i == 0)
            count++;
    }
        if (count>2)
            cout<<"Number is not Prime"<<endl;
        else
            cout<<"Number is Prime";
        }
        return 0;
} 
    
