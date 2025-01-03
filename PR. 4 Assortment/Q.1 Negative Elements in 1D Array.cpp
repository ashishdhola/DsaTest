// Q.1 Negative Elements in 1D Array
// Develop a program that finds all the negative elements from a given 1D array.

#include<iostream>
using namespace std;


int main(){
    int arr[10];
    int n;
    cout<<"Enter the number of elenents in Arry: "<<endl;
    cin>>n;
    cout<<"Enter the elements of Arry: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Negative elements in Arry are: "<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            cout<<arr[i]<<" "<<endl;
        }
    }
    return 0;

}