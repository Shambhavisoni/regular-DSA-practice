class Solution {
  public:
  int helper(int arr[],int k,int s,int e){
      //first approach
      int mid=(s+e)/2;
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
      return -1;
      
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
