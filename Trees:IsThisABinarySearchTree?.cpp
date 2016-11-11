/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/
bool check(Node* root, int mini, int maxi){
    if(root == NULL){
        return true;
    }
    if(root->data < maxi && root->data > mini){
        return check(root->right, root->data, maxi) & check(root->left, mini, root->data);
    }
    return false;
}       

bool checkBST(Node* root) {
    return check(root, -200000, 200000);
}
