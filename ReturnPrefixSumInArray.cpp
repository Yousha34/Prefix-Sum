// Given an integers array , return the prefix sum sum in the same array without creating a new array.

#include<iostream>
#include<vector>
using namespace std ;

void fun( vector<int> &vec ){

    for( int i = 1; i < vec.size(); i++ ){
        vec[i] = vec[i] + vec[i-1] ;
    }
}

int main(){

    int size ;

    cout << "Enter size : " ;
    cin >> size ;

    vector<int> vec ;

    for( int i = 0; i < size; i++ ){

        int temp ;

        cout << "Enter " << i+1 << " element : " ;
        cin >> temp ;

        vec.push_back( temp ) ;
        
    }

    fun( vec ) ;
    
    cout << endl ;

    for( int i = 0; i < size; i++ ){
        cout << vec[i] << " " ;
    }

    return 0 ;

}