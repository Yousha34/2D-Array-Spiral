#include<iostream>
using namespace std ;
int main (){

    int row, col ;
	
	cout << "Enter number of row : " ;
	cin >> row ;
	
	cout << "Enter no of colomns : " ;
	cin >> col ;

    int arr[row][col] ;
		
	for(int i = 0; i < row; i++ ){
			
		for( int j = 0; j < col; j++ ){
			cin >> arr[i][j] ;
		}
		
	}

    cout << "\nFor Original : \n" ;

    for(int i = 0; i < row; i++ ){
			
		for( int j = 0; j < col; j++ ){
			cout << arr[i][j] << " " ;
		}

        cout << endl ;
		
	}

    cout << endl << "\nFor Spiral : \n" ;

    int min_row = 0 ;
    int max_row = row - 1 ;
    int min_col = 0 ;
    int max_col = col - 1 ;
    int total_elements = row * col ;
    int count = 0 ;

    while( true ){

        // for min_row :

        for( int i = min_col; i <= max_col ; i++ ){

            cout << arr[min_row][i] << " " ;
            count++ ;

        }
    
        min_row++ ;
        cout << "  " ;

        if( count >= total_elements ){
            break ;
        }

        // for max_col :

        for( int j = min_row; j <= max_row; j++ ){

            cout << arr[j][max_col] << " " ;
            count++ ;
        
        }

        max_col-- ;
        cout << "  " ;

        if( count >= total_elements ){
            break ;
        }

        // for max_row :

        for( int k = max_col; k >= min_col; k-- ){

            cout << arr[max_row][k] << " " ;
            count++ ;
        
        }

        max_row-- ;
        cout << "  " ;

        if( count >= total_elements ){
            break ;
        }

        // for min_col :

        for( int l = max_row; l >= min_row; l-- ){

            cout << arr[l][min_col] << " " ;
            count++ ;
        
        }

        min_col++ ;
        cout << "  " ;

        if( count >= total_elements ){
            break ;
        }

    }

    return 0 ;
}    