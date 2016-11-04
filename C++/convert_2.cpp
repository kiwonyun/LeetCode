class Solution {
public:
    // 0     6       12     - (i mod 6 == 0)
    // 1   5 7    11 13     - (i mod 6 == 1 or -1)
    // 2 4   8 10    14     - (i mod 6 == 2 or -2)
    // 3     9       15     - (i mod 6 == 3 or -3)
    string convert(string s, int numRows) {
        string res = "";
        int i, step, T = max( 2*(numRows-1), 1 );
        for(int r = 0; r < numRows; r++){
            i = r;
            while(i < s.length()){
                res += s[i];
                i += T - (2*i % T);
            }
        }
        
        return res;
    }
};