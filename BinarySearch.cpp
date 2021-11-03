#include<iostream>
using namespace std;
int main(){
    int arr[10]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100}, i=0, start=0, end=9, mid, item;
    cin>>item;
    while(start<=end){
        mid=(end + start)/2;
        if(item==arr[mid]){
            cout<<"Location"<<mid;
            return 1;
        }
         if(item>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    cout<<"not found";
    return 0;
}
