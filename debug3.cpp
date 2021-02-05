#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define MAX 100

// number less than 38 or equal to 38 only.
// remainde 

int calculate(int a[MAX],int b[MAX], int n){
    int num=0;
    int diff=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<20;j++){
            num = b[j];
            if(a[i]<b[j]){
                break;
            }
        }
        if((a[i]<38)){
            cout<<a[i]<<endl;
        }
        else if(a[i] == 100){
            cout<<a[i]<<endl;
        }
        else{
            diff = num - a[i];
            if(diff < 3){
                cout<<num<<endl;
            }
            else if(diff == 3 || diff > 3){
                cout<<a[i]<<endl;
            }
        }
    }
    return 0;
}
int main(){
    int a[MAX];
    int b[MAX]={5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,95,100};
    int n=0;
    cin>>n;


    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    calculate(a,b,n);
    



    return 0;
}