#include<bits/stdc++.h>

using namespace std;
void insertion_sort(vector<int>&arr){
    for(int i=1;i<arr.size();i++){
        int key = arr[i];
        int j=i-1;
        while(j>=0 and arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
int main(){
    vector<int> arr={90,60,30,40,34,67,89};
    insertion_sort(arr);
    for(auto x:arr){
        cout<<x<<endl;
    }
}