#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    for(int i=0; i<T; i++){
        int N,sum; 
        cin >> N;
        int H[N];
        for(int j=0; j<N; j++){
            cin >> H[j];
        }
        int temp=0;
        int min,a;
        for(int j=0; j<N;j++){
        for(int k=0;k<N;k++){
            if(H[k]==-1){
                continue;
            }
            else if(H[k+1]<H[k]){
            min=k+1;
            }
            else{
            min=k;
            }
        }
            temp=a;
            temp=min;
            sum+= (a-temp);
            H[min]=-1;
        }
        cout <<sum << endl;
    }

}