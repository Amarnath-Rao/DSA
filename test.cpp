int maxIndexDiff(int arr[], int n) 
    { 
        // Your code here
        int left[n];
        left[0] = arr[0];
        for(int i=1; i<n; i++){
            left[i] = min(left[i-1] , arr[i]);
        }
        int i = n-1;
        int j = n-1;
        int ans = INT_MIN;
        while(i>=0 && j>=0){
            if( arr[j] >= left[i]){
                 ans = max(ans, j-i);
                 i--;
            }
            else{
                j--;
            }
        }
        return ans;
    }