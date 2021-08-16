/*
9. Palindrome Number
Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward. For example, 121 is palindrome while 123 is not.

 

Example 1:

Input: x = 121
Output: true
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
Example 4:

Input: x = -101
Output: false
 

Constraints:

-231 <= x <= 231 - 1
 


*/

#include<cstring>
class Solution {
public:
    bool isPalindrome(int x) {
       unsigned long int num=x,rev=0;
        if(x<0)
            return false;
        else
        {
           while(num!=0)
           {
               rev=10*rev+(num%10);
               num=num/10;
               
           }
            cout<<rev;
            if(rev==x)
                return true;
            else
                return false;
        }
        
    }
};
// #include<cstring>
// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if(x<0)
//             return false;
//         else
//         {
//             string str= to_string(x);
//             for(int i=0,j=str.length()-1;i<j;i++,j--)
//                 if(str[i]!=str[j])
//                     return false;
            
//             return true;
//         }
        
//     }
// };









