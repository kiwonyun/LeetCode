class Solution {
public:

    int getSum(int a, int b) {
        int carry = 0;
        while( b != 0 ){
            carry = a & b;
            a ^= b;
            b = carry << 1;
        }
        
        return a;
    }
    
    /* c.f. Implement subtract without using +,- operators
    int getSubtract(int a, int b) {
        int borrow = 0;
        while( b != 0 ){
            borrow = ~a & b;
            a ^= b;
            b = borrow << 1;
        }
        
        return a;
    }
    */
};