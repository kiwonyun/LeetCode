class Solution {
public:
    string parseTernary(string expression) {
        if( expression.length() == 1 ) return expression;
        
        int i = 1, n_nested = 0;
        for(; i < expression.length(); i++){
            if( expression[i] == '?' ) n_nested++;
            else if( expression[i] == ':' ) n_nested--;
            
            if( n_nested == 0 ) break;
        }
        
        if( expression[0] == 'T' )
            return parseTernary(expression.substr(2, i-2));
        else
            return parseTernary(expression.substr(i+1));
    }
};