class Solution{
public:
    //Function to reverse every sub-array group of size k.
    /*void reversearr(vector<long long>& arr,int s,int e){
        while(s<e){
            long long a=arr[s];
            arr[s]=arr[e];
            arr[e]=a;
            s++;
            e--;
        }
    }
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        int a=0;
        for(int i=0;i<n;i++){
            int e=k+a-1;
            if(e<n){
                reversearr(arr,a,e);
            }
            else if(e>=n){
                reversearr(arr,a,n-1);
            }
            a=e+1;
        }
    }*/
  
  //Approach 2
  void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        for(int i=0;i<n;i+=k){
            int s=i;
            int e=k+i-1;
            if(e>=n){
                e=n-1;
            }
            while(s<e){
                swap(arr[s],arr[e]);
                s++;
                e--;
            }
        }
    }
};
/*TC: O(n)
  SC: O(1)
*/
