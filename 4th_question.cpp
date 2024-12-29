#include<iostream>
using namespace std;
int year;

bool checkYear (int year){
    if (year%400 == 0){
        return true;
    }
    else if(year%100 ==0){
        return false;
    }
    else if(year%4==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    cin>>year;
    cout<<"Year is: "<<year<<endl;
    checkYear(year) ? cout<<year<<" : "<<"Leap Year"<<endl : cout<<year<<" : "<<"Not Leap Year";
}