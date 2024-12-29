//you are given 3 numbers, and you have to find out which one is the largest.
#include<iostream>
using namespace std;
int year;
int main(){
    int a;
    int b;
    int c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b && a>c){
        cout<<"a is greater than b and c"<<endl;
        return 0;
    }else if(b>a && b>c){
        cout<<"b is greater than a and c"<<endl;
        return 0;
    }else{
       cout<<"c is greater than a and b"<<endl;
        return 0;
    }
}

