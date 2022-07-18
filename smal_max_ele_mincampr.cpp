//Find the maximum and minimum element in an array using minimum number of comparision
#include<bits/stdc++.h>
using namespace std;
// Method 1 (simple linear search)
/*
int main(){
    int min,max;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    min = arr[0];
    max = arr[1];
    for(int i=2;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
        else if(arr[i]>max){
            max = arr[i];
        }
        else 
            continue;
    }
    cout<<"minimum element: "<<min<<endl<<"maximum element: "<<max<<endl;
    return 0;
}*/
//method 2 (efficient)
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min,max;
    min = arr[0];
    max = arr[1];
    if(n%2==0){
        for(int i=2;i<n;i++){
            if(arr[i]>arr[i+1]){
                if(arr[i]>max){
                    max = arr[i];
                }
                else if(arr[i+1]<min){
                    min = arr[i+1];
                }
                else 
                continue;
            }
            else if(arr[i]<arr[i+1]){
                if(arr[i]>max){
                    max = arr[i];
                }
                else if(arr[i+1]<min){
                    min = arr[i+1];
                }
                else
                continue;
            }
            else{
                if(arr[i]>max){
                    max = arr[i];
                }
                else if(arr[i+1]<min){
                    min = arr[i+1];
                }
                else 
                continue;
            }
        }
    }
    else{
        for(int i=2;i<n;i++){
            if(arr[i]>arr[i+1]){
                if(arr[i]>max){
                    max = arr[i];
                }
                else if(arr[i+1]<min){
                    min = arr[i+1];
                }
                else 
                continue;
            }
            else if(arr[i]<arr[i+1]){
                if(arr[i]>max){
                    max = arr[i];
                }
                else if(arr[i+1]<min){
                    min = arr[i+1];
                }
                else
                continue;
            }
            else{
                if(arr[i]>max){
                    max = arr[i];
                }
                else if(arr[i+1]<min){
                    min = arr[i+1];
                }
                else 
                continue;
            }
        }
        if(min>arr[n-1])
            min = arr[n-1];
        else if(max<arr[n-1])
            max = arr[n-1];
    }
    cout<<"min: "<<min<<endl<<"max: "<<max<<endl;
    return 0;
}