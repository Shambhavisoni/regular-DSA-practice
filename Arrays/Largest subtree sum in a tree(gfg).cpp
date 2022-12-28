  public:
    // Function to find largest subtree sum.
    int helper(Node* root,int& ans){
        if(root==NULL){
            return 0;
        }
        int sum=root->data+helper(root->left,ans)+helper(root->right,ans);
        ans=max(ans,sum);
        return sum;
    }
    int findLargestSubtreeSum(Node* root)
    {
        //Write your code here
        if(root==NULL){
            return 0;
        }
        int ans=INT_MIN;
        helper(root,ans);
        return ans;
    }
/*TC: O(N) due to number of nodes
  SC: O(N) function call stack size
*/
};
