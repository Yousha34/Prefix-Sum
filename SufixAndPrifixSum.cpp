// Check if we can partition the array into two subarrays with equal sum. More formally, check
// that the prefix sum of a part of the array is equal to the suffix sum of rest of the array.

#include<iostream>
#include<vector>
using namespace std ;

bool fun( vector<int> &vec ){

    int total_sum = 0, prifix_sum = 0 ;

    for( int i = 0; i < vec.size(); i++ ){
        total_sum += vec[i] ;
    }

    for( int i = 0; i < vec.size(); i++ ){

        prifix_sum += vec[i] ; ;

        int sufix_sum = total_sum - prifix_sum ;

        if( prifix_sum == sufix_sum ){
            return true ;
        }
    }

    return false ;
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

    if( fun( vec ) ){
        cout << "YES Sufix and prifix Sum is equal" ;
    }
    else{
        cout << "NO Sufix and prifix Sum is not equal" ;
    }

    return 0 ;

}