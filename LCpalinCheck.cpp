class Solution {
public:

// long long int to overcome the test case of a large number in leet code

long long int  revNum(int X) {
   long long int  Y = 0;
   while (X > 0) {
      //Extract the last digit
      long long int  digit = X % 10;
      //Appending last digit
      Y = Y * 10 + digit;
      // Shrinking X by discarding the last digit
      X = X / 10;
   }
   return Y;
    }
    bool isPalindrome(int X) {
         int Y = revNum( X);

         if (X <0){
             return false;
         }
         else if (X == Y){
             return true;
         }
         else{
             return false;
         }
         return 0;

    }
};