
#include <iostream>
#include<algorithm>
using namespace std;

void reverse(string str,int k){
  int n= str.length();
  for(int i=0; i<n ;i=i+k){
      for (int j = i; j < (k+i) / 2; j++){
        swap(str[j], str[(k+i) - j - 1]);
      }
    }
    for(int i=0; i<n; i++){
      cout <<str[i];
    }
  }

int main(){
  int k=2;
  string str="abcdefg";
  reverse(str,k);
}
