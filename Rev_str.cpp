// Reverse the array
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    //method-1
    /*reverse(str.begin(),str.end());
    cout<<str;*/

    //method-2
    /*int len = str.length();
    string rev = "";
    for(int i=len-1;i>=0;i--){
        rev = rev + str[i];
    }
    cout<<rev;*/

    //method-3
    int len = str.length();
    for(int i=0;i<len/2;i++){
        swap(str[i],str[len-i-1]);
    }
    cout<<str;
    return 0;
}