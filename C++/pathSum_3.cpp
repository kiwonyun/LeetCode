/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
    int n_path;
public:
    void traverse(TreeNode* node, vector<int>& prev_sum_list, int sum){
        vector<int> sum_list = prev_sum_list;
        
        if( node != NULL ){
            
            // update accumulated sum
            for(int i = 0; i < sum_list.size(); i++)
                sum_list[i] += node->val;
            sum_list.push_back(node->val);  // current node itself
            
            // check the number of accumulated sum to a given value
            for(int i = 0; i < sum_list.size(); i++){
                if( sum_list[i] == sum )
                    n_path++;
            }
            
            if( node->left != NULL )
                traverse( node->left, sum_list, sum );
            if( node->right != NULL )
                traverse( node->right, sum_list, sum );
        }
    }

    int pathSum(TreeNode* root, int sum) {
        n_path = 0;
        vector<int> sum_list;
        traverse(root, sum_list, sum);
        
        return n_path;
    }
};