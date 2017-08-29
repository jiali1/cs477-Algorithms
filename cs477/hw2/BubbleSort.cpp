#include <iostream>
#include <cstring>

using namespace std; 

void swap( char &a, char &b );

/**
 * @brief main function.
 *
 * @details implements the modified bubble sort algorithm to sort the string. 
 *          
 * @param in: N/A
 *
 * @note N/A  
 */
int main( ) 
{
   int index = 0; 
   int indexTwo = 0;
   int indexThree = 0; 
   int numOfComparisons = 0;
   char str[30]; 
   strcpy( str, "EASYQUESTION" ); 
   
   for( index = 0; index < strlen( str ); index++ )
   {
      for( indexTwo = index; indexTwo < ( strlen( str ) - index - 1); indexTwo++ )
      {
         if( str[indexTwo] > str[indexTwo + 1] )
         {
            swap( str[indexTwo], str[indexTwo + 1] );
         }
         numOfComparisons++;
      }
      cout << index << ": left-to-right pass: " << str << endl; 

      for( indexThree = ( strlen( str ) - index - 2); indexThree > index; indexThree-- )
      {
         if( str[indexThree] < str[indexThree - 1] )
         {
            swap( str[indexThree], str[indexThree - 1] );
         }
         numOfComparisons++;
      }
      cout << index << ": right-to-left pass: " << str <<endl; 
   }
   cout << "result: " << str << endl;
   cout << "number of comparisons: " << numOfComparisons << endl;

   return 0;
}

/**
 * @brief swap function.
 *
 * @details swap two characters. 
 *          
 * @param in: a, b
 *
 * @note N/A  
 */
void swap( char &a, char &b )
{
   char temp = a; 
   a = b; 
   b = temp; 
}
