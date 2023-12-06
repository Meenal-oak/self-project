#include <bits/stdc++.h>
using namespace std;

void insert_details(int *A, int size){
    for(int i=0; i<size;i++){
	        cin>>A[i];
}

int task(int A*,int size, int D*){
    
    int V[2*size];
    for(int i=0;i<size;i++){
        if(i<size){
            V[i]=A[i];
        }
        else break;
        V[i+size]=D[i];
    }
    
    sort(V, V + 2*n);
    int max;
    int count=1;
        while(i<2*size){
            int temp=0;
            while(i+1<2*size && V[i]==V[i+1]){
                temp++;
                i++;
            }
            if(count<temp){
                max=temp;
            }
            else if(count>=temp){
                max=count;
            }
        }
        return max;
    }
    
    
    
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int A[n];
	    int D[n];
	    int count =0;
	    
	    insert_details(A,n);
	    insert_details(D,n);
	    
	    int a = task(A,n,D);
	    cout<<a<<endl;
	}
	    
	   
	
	return 0;
}
