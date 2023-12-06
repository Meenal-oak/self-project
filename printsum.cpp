#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    int Q;
    cout<<"Please write the Number of Elements here: ";
    cin >> N;
    int arr1[N];
    int indx;
    cout <<"Write the Elements here: "<< endl;
    for(int i=0; i<N; i++){
      cin >> arr1[i];
    } 
    cout<<"Elements are:"<< endl;
    for(int i=0; i<N; i++){
      cout << arr1[i]<< " ";
    }
    cout << endl;
    cout << "Please Write number of Queries here: ";
    cin >> Q;
    cout<< endl;
    int array[Q];
    cout<<"Please write the Queries here: ";
    for(int i=0; i<Q; i++){
        cin >> array[i];
    }
    cout <<"Queries are: ";
    for(int i=0; i<Q; i++){ 
        cout << array[i] <<" ";
    }

    cout <<"Please write the problem solution and its ";

    return 0;
    
}
