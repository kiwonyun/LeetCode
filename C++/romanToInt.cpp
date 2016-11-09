class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        int prev = 0, cur;
        for(int i = s.length()-1; i >= 0; i--){
            switch( s[i] ){
                case 'I':
                    cur = 1;
                    break;
                case 'V':
                    cur = 5;
                    break;
                case 'X':
                    cur = 10;
                    break;
                case 'L':
                    cur = 50;
                    break;
                case 'C':
                    cur = 100;
                    break;
                case 'D':
                    cur = 500;
                    break;
                case 'M':
                    cur = 1000;
                    break;
            }
                    
            if( cur < prev )
                num -= cur;
            else
                num += cur;
                
            prev = cur;
        }
        
        return num;
    }
};