// Given an array of integers of size n. Answer q queries where you need to print the sum of
// values in a given range of indices from l to r (both included).
// Note: The values of l and r in queries follow 1-based indexing.

#include<iostream>
#include<vector>
using namespace std ;

void fun( vector<int> &vec ){

    int number_of_queries, queries_count = 1 ;

    cout << "Enter number of queries : " ;
    cin >> number_of_queries ;

    for( int i = 1; i <= vec.size()-1; i++ ){   // TAKING PRIFIX SUM
        vec[i] += vec[i-1] ;
    }

    for( int i = 1; i <= vec.size()-1; i++ ){   // PRINNTING PRIFIX SUM
        cout << vec[i] << " " ;
    }

    cout << endl << endl ;

    while( queries_count <= number_of_queries ){

        int indice_01, indice_02, answer = 0 ;

        cout << "Enter Indice 01 : " ;          
        cin >> indice_01 ;

        cout << "Enter Indice 02 : " ;
        cin >> indice_02 ;

        answer = vec[indice_02] - vec[indice_01-1] ;

        cout << "\nAnswer No. 0" << queries_count << " : " << answer << endl << endl ;

        queries_count++ ;
    }

}

int main(){

    int size ;

    cout << "Enter size : " ;
    cin >> size ;

    vector<int> vec( size+1, 0 ) ;

    for( int i = 1; i <= size; i++ ){
        
        cout << "Enter " << i << " element : " ;
        cin >> vec[i] ;

    }

    cout << endl ;      

    fun( vec ) ;

    return 0 ;

}