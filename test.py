def maxSubArrayLen(arr):
    max_so_far = max_ending_here = 0
    start = end = 0
    beg = 0
    for i in range(len(arr)):
        max_ending_here = max_ending_here + arr[i]
        if max_ending_here < 0:
            max_ending_here = 0
            beg = i + 1
        elif max_so_far < max_ending_here:  
            max_so_far = max_ending_here
        start = beg
        end = i
    return end - start + 1

arr = [1,2,3,4,5,-1,-2,-3,-4,-5,6,7,8,9,10]
print(maxSubArrayLen(arr))


"""
class Solution{
public:
	
	int kSubstrConcat (int n, string s, int k)
	{
	    if(n % k)
	        return 0;
	        
	    map<vector<int>, int> substr;
	    
	    vector<int> f(26, 0);
	    
	    for(int i = 0; i < n; i += k){
	        for(int j = i - k; j < i and j > -1; j++)
	            --f[s[j] - 'a'];
	        for(int j = i; j < i + k; j++)
	            ++f[s[j] - 'a'];
	        
	        substr[f]++;
	        
	        if(substr.size() > 2)
	            return 0;
	    }
	    
	    int freq = (*substr.begin()).second;
	    
	    return (freq == 1 or freq >= n / k - 1);
	}
};

"""