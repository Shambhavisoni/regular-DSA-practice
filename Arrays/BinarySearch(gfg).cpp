/*Step-by-step Binary Search Algorithm: We basically ignore half of the elements just after one comparison.

Compare x with the middle element.
If x matches with the middle element, we return the mid index.
Else If x is greater than the mid element, then x can only lie in the right half subarray after the mid element. So we recur for the right half.
Else (x is smaller) recur for the left half.*/

class Solution {
  public:
  int helper(int arr[],int k,int s,int e){
      //first approach
      /*int mid=(s+e)/2;
      if(arr[mid]==k){
              return mid;
      }
      while(s<e){
          if(arr[mid]>k){
              return helper(arr,k,s,mid-1);
              
          }
          else if(arr[mid]<k){
              return helper(arr,k,mid+1,e);
          }
          
      }
      return -1;*/
      
      //second approach
      if(s>e){
          return -1;
      }
      else{
          int mid=(s+e)/2;
          if(arr[mid]==k){
              return mid;
          }
          else if(arr[mid]>k){
              return helper(arr,k,s,mid-1);
              
          }
          else if(arr[mid]<k){
              return helper(arr,k,mid+1,e);
          }
      }
  }
    int binarysearch(int arr[], int n, int k) {
        // code here
        return helper(arr,k,0,n-1);
    }
};
