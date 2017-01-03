class Solution {
public:
    string getPattern(string input){
        string str_pattern = "";
        int pos = 0, num_of_c;
        char c;
        while( pos < input.length() ){
            c = input.at(pos);
            num_of_c = 1;
            pos++;
            while( pos < input.length() && c == input.at(pos) ){
                num_of_c++;
                pos++;
            }
            str_pattern += to_string(num_of_c) + string(1, c);
        }
        
        cout << str_pattern << endl;
        return str_pattern;
    }
    
    string countAndSay(int n) {
        string pattern = "1";
        for(int i = 1; i < n; i++){
            pattern = getPattern(pattern);
        }
        
        return pattern;
    }
};