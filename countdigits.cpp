#include <iostream>

using namespace std;

int numberofdigits(int n){
      int x = n; 
      int count =0;
   while( x !=0 ) 
   {
       x = x / 10;
       count++;
   }
   return count;
}

int main()
{
    int b ;
    cin >> b;
    cout<< numberofdigits(b);

    return 0;
}
