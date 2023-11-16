// step 1: find the num that only appear once in the array

/* step 2:
 
test cases:

Example 1: 
Input: nums = [2,2,1] 
Output: 1 

Example 2: 
Input: nums = [4,1,2,1,2] 
Output: 4 

Example 3: 
Input: nums = [1] 
Output: 1


*/


/* step 3:
 
  pseudocode:
  create an int variable name bits;

  for each number in the numbers array
       bits xor each number
  return bits

 */

#include <iostream>
#include <vector>

int FindNum(std::vector<int>& nums) {
  int bits = 0;
  for (int num : nums)
      bits = bits ^ num;
  return bits;
}
// example2  {4, 2, 1, 2, 1};
//  0000 ^ 0100 -> 0100 -> 4
//  0100 ^ 0001 -> 0101 -> 5
//  0101 ^ 0010 -> 0111 -> 7
//  0111 ^ 0001 -> 0110 -> 6
//  0110 ^ 0010 -> 0100 -> 4

// 0000 -> 0
// 0001 -> 1
      // 0010 -> 2
// 0011 -> 3
      // 0100 -> 4
// 0101 -> 5
// 0110 -> 6
// 0111 -> 7
      // 1000 -> 8
// 1001 -> 9
// 1111 -> 15
      // 1 0000 -> 16
      //10 0000 -> 32
      //100 0000 -> 64
      //1000 0000 -> 128  int -> 8 bytes -> 64 bits 2^32 - 1

// csapp 


int main(int argc, char **argv) {

  std::vector<int>example1 = {2,2,1};
  std::vector<int>example2 = {4,1,2,1,2};
  std::vector<int>example3 = {};

  std::cout << FindNum(example1) << '\n';
  std::cout << FindNum(example2) << '\n';
  std::cout << FindNum(example3) << '\n';
}









