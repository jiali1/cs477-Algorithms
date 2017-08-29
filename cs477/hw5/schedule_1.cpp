#include <iostream> 
#include <algorithm> 

using namespace std; 

int main( ) 
{
	int n = 4;
	int x[n+1] = {0, 10, 1, 7, 7};
   int s[n+1] = {0, 8, 4, 2, 1};
	int aux_table[n+1] = {0, 0, 0, 0, 0};
	int optVal = 0; 
	int arr[n+1][n+1]; 
	
	for( int i = 0; i < ( n + 1); i++ )
	{
		for( int j = 0; j < (n + 1); j++ )
		{
			arr[i][j] = -1; 
		}
	}	

	for( int i = 0; i < ( n + 1 ); i++ )
	{
		arr[i][n] = min( s[i], x[n]); 
	}	
   
	for( int j = n - 1; j >= 0; j-- )
	{
		for( int i = 0; i < n; i++ )
		{
			if( j >= i)
			{
				arr[i][j] = max( arr[0][j+1], arr[i+1][j+1] ) + min(s[i], x[j]);
			}
		}
	}
   
	optVal = arr[0][0];

	for( int i = 0; i < ( n + 1 ); i++ )
	{
		for( int j = 1; j < ( n + 1 ); j++ )
		{
			if( arr[j][i] >= optVal )
			{
				aux_table[i] = 1; 
			}
		}
	}

	for( int i = 0; i < ( n + 1 ); i++ )
	{
		cout << aux_table[i] << " "; 
	}
	cout << endl;

	
	return 0; 
}
