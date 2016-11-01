class Solution {
public:
    string removeKdigits(string num, int k) {
        while( k > 0 && num.length() != 0 ){
            if( num[0] == '0' ){ 
                num.erase(0, 1);
                continue;
            }
            
            int i = 0;
            while( num[i] <= num[i+1] ){
                i++;
            }
            num.erase(i, 1);
            k--;
        }
        
        while(num[0] == '0') num.erase(0, 1);
        
        return num.length() == 0 ? "0" : num;
    }
};