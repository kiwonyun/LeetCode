class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.length()-1;
        int j = num2.length()-1;
        int carry = 0;
        int subsum = 0, digit = 1;
        string sum = "";
        int n1, n2;
        while( i >= 0 || j >= 0 ){
            i < 0 ? n1 = 0 : n1 = num1[i] - '0';
            j < 0 ? n2 = 0 : n2 = num2[j] - '0';
            subsum = n1 + n2 + carry;
            if( subsum >= 10 ){
                subsum -= 10;
                carry = 1;
            }
            else{
                carry = 0;
            }
            sum = to_string(subsum) + sum;
            
            i--;
            j--;
        }
        
        if( carry > 0 ) sum = "1" + sum;
        return sum.length() == 0 ? "0" : sum;
    }
};