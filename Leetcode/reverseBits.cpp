/*reverseBits.cpp

https://leetcode.com/problems/reverse-bits/description/

Reverse bits of a given 32 bits unsigned integer.

Example:

Input: 00000010100101000001111010011100
Output: 00111001011110000010100101000000
Explanation: The input binary string 00000010100101000001111010011100 represents the unsigned integer 43261596, so return 964176192 which its binary representation is 00111001011110000010100101000000.

Approach Description:
Check if i th bit is set . If i th bit is set , set the corresponding ( 32 - i - 1 )th bit in ans.
*/

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
       unsigned int ans = 0;
        
       for(int i = 0 ; i <= 32 ; ++i)
       if(1 << i & n) ans = ans | (1 << (32-i-1));
        
       return ans;
    }
};
