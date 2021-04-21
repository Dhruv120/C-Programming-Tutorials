#include <iostream> 
using namespace std; 
  
int LongestWordLength(string str) 
{ 
      
    int n = str.length(); // 10
    
    int res = 0, curr_len = 0, i; 
      
    for (int i = 0; i < n; i++) { 
          
        // If current character is  
        // not end of current word.                     // "I am Dhruv"
        if (str[i] != ' ') 
            curr_len++;                          // cur_len =
  
        // If end of word is found 
        else 
        { 
            res = max(res, curr_len);                // res =2
            curr_len = 0;                            // cur_len =0
        } 
    } 
  
    // We do max one more time to  
    // consider last word as there  
    // won't be any space after  
    // last word. 
    return max(res, curr_len); 
} 
  
// Driver function 
int main() 
{ 
    string s = 
    "I am Dhruv"; 
                      
    cout << LongestWordLength(s); 
    return 0; 
} 