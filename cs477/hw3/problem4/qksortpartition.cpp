#include <iostream> 
#include <algorithm> 

using namespace std;  


int main()
{
   char str[] = {'A','B','R','A','C','A','C','A','B','R','A','B','C','D','C'}; 
   int size = 14;
   char pivot = str[size];
   int index = 0;
   int indexTwo = size - 1;
   int counterTwo = 0; 
   int i, j, k = 0; 
   bool check = false;
   counterTwo = indexTwo;

   while( index < indexTwo )
   {
      
      while( str[index] < pivot )
      {
         index++;
      }  
      if( index < indexTwo )
      {
         while( str[indexTwo] > pivot )
         {
            indexTwo--; 
         } 
      }
      swap( str[index], str[indexTwo] );  
      cout << str << endl; 
      if( index > indexTwo )
      {
         check = true;
      }
      if( str[index] == pivot )
      {
         swap( str[index], str[0] );
         cout << str << endl; 
      }
      if( str[indexTwo] == pivot )
      {
		   swap( str[indexTwo], str[counterTwo] ); 
         cout << str << endl; 
		   counterTwo--;
	   }
      index++;
      indexTwo--;
   }
   
   swap( str[++indexTwo], str[size] );
   cout << str << endl; 
   i = indexTwo - 1;
   for( k = 0; k < indexTwo-1; k++ )
   {
      if( str[k] == str[indexTwo] )
      {
         swap( str[i], str[k] );
         cout << str << endl; 
         i--;
      }
   }
   
   j = indexTwo + 1;
   for( k = size; k > indexTwo+2; k-- )
   {
      if( str[k] == str[indexTwo] )
      {
         swap( str[j], str[k] ); 
         cout << str << endl; 
         j++;
      }
   }
   cout << str << endl;
   return 0;
}




