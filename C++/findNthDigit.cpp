class Solution {
public:
    int findNthDigit(int n) {
        
        // find the position of the target number
        int subsum = 0, remaining = n, i = 1;
        while( remaining - 9 * pow(10,i-1) * i > 0 ){
            subsum += 9 * pow(10,i-1) * i;
            remaining = n - subsum;
            i++;
        }
        int target = pow(10,i-1) + remaining / i;
        
        // find the digit of the target number
        int remainder = remaining % i;
        return remainder == 0 ? to_string(target-1).at(i-1) - '0' : to_string(target).at(remainder-1) - '0';
    }
};