class Solution {
public:
    // sorting by descending order of height (if the height is equal, then ascending order of k)
    static bool myCompare(const std::pair<int,int>& p1, const std::pair<int,int>& p2) {
        if( p1.first == p2.first )
            return p1.second < p2.second;
        else
            return p1.first > p2.first;
    }

    void addPerson(pair<int,int>& person, vector<pair<int,int>>& people){
        if( people.empty() )
            people.push_back(person);
        else{
            int height = person.first;
            int k = person.second;
            int n_greater_than_equal = 0;
        
            // if k==0, then push the person to the front
            if( k == 0 )
                people.insert(people.begin(), person);
            else{
                for(int i = 0; i < people.size(); i++){
                    if( height <= people[i].first )
                        n_greater_than_equal++;
                        
                    if( n_greater_than_equal == k ){
                        people.insert(people.begin()+i+1, person);
                        break;
                    }     
                }
            }
        }
    }
  
    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
        // sorting by height and k
        sort(people.begin(), people.end(), myCompare);
        
        // add person one by one
        vector<pair<int,int>> res;
        for(int i = 0; i < people.size(); i++){
            addPerson(people[i], res);
        }
        
        return res;
    }
};