// problem link - https://leetcode.com/problems/hamming-distance
// time complexity - O(1)
// space complexity - O(1)
class Solution {
public:
    int hammingDistance(int x, int y) {
     return __builtin_popcount(x^y);
    }
};
