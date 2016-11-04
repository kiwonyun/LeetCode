class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> str_per_row(numRows);
        
        // fill string buffer per each row
        int row = 0;
        int step = 1;
        for(int i = 0; i < s.length(); i++){
            str_per_row[row] += s[i];
            
            if( numRows != 1 ){
                if( row >= numRows - 1 || (row <= 0 && i != 0) )
                    step *= -1;
                row += step;
            }
        }
        
        // generate output string
        string res = "";
        for(int i = 0; i < numRows; i++){
            res.append(str_per_row[i]);
        }
        
        return res;
    }
};