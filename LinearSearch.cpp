#include<iostream>
using namespace std;
int linearsearch(int r[] ,int akj ){
    for (int i = 0; i < 10; i++){
        if (r[i]==akj){
            cout<<"Found at index "<< i << endl;
            return -1;
        }
        else{
            cout<<"Not Found";
            return -1;
        }
    }
}
int main(){
    int usersearch, arr[]={10,41,25,38,46,55,66,75,48,29};
    cout<<"A Program to show how a linear search works (Integers)\nThe avilable integers are 10 , 41 , 25 , 38 , 46, 55 , 66 , 75 , 48 , 29\nEnter the integer to search for : ";
    cin>>usersearch;
    linearsearch(arr, usersearch);
    return 0;
}
