class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        for (int i = 0; i < 32; i++) {
            // Shift result left to make room, then add last bit of n
            result = (result << 1) | (n & 1);
            // Move to next bit of n
            n >>= 1;
        }
        return result;
    }
};