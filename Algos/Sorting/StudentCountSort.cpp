// non-comparation algorithum
// works for elements in the range of 0-9
#include<iostream>
using namespace std;
void countSort(int arr[],int size){
    int k=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]> k)
        {
            k=arr[i];
        }
    }

    int * count = new int[k+1];
    for(int i=0;i<k+1;i++) {
        count[i] = 0;
    }
    // calculate the freq of each element in the array

    for(int i=0;i<size;i++) {
        count[arr[i]]++;
    }

    for(int i=1;i<=k;i++){
        count[i]+=count[i-1];
    }
    int output[size];
    for(int i=size-1;i>=0;i--){
        output[--count[arr[i]]]=arr[i];
    }
    // copy the output back to the input
    for(int i=0;i<size;i++) {arr[i]=output[i];}
    delete []count;
}
int main(){
    int arr[]={3,4,6,1,4,3,2,3,1};
    int n=9;
    countSort(arr,n);
    cout<<"displaying the elments after count sort"<<endl;
    for(int val:arr){
        cout<<val<<" ";
    }

}