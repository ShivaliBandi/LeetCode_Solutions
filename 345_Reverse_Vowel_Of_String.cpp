
/*
345. Reverse Vowels of a String

Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both cases.

 

Example 1:

Input: s = "hello"
Output: "holle"
Example 2:

Input: s = "leetcode"
Output: "leotcede"
 

Constraints:

1 <= s.length <= 3 * 105
s consist of printable ASCII characters.
*/
class Solution {
public:
    bool isVowel(char c)
{
    return (c=='a' || c=='A' || c=='e' ||
            c=='E' || c=='i' || c=='I' ||
            c=='o' || c=='O' || c=='u' ||
            c=='U');
}
    string reverseVowels(string str) {
        int i = 0;
    int j = str.length()-1;
        while (i < j)
    {
        if (!isVowel(str[i]))
        {
            i++;
            continue;
        }
        if (!isVowel(str[j]))
        {
            j--;
            continue;
        }
  
        // swapping
        swap(str[i], str[j]);
  
        i++;
        j--;
    }
  
    return str;
    }
};
