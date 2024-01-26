class Solution
{
    public:

    double fractionalKnapsack(int W, Item arr[], int n)
    {
    
        vector<pair<int,int>> vec;
        for(int i = 0 ; i <  n ;i++)
        {
            Item ele = arr[i];
            vec.push_back({ele.value , ele.weight});
        }
        
        sort(vec.begin() ,vec.end() , [&](pair<int,int> &a, pair<int,int> &b)
            {
                return ( a.first*1.0 / a.second  ) > ( b.first*1.0 / b.second); 
            });
        double ans= 0 ;
        int i = 0;
        for( ;i<n;i++)
        {
            if(vec[i].second<=W)
            {
                ans +=vec[i].first;
                W = W-vec[i].second;
            }
            else
            break;
        }
        if(i<n && W>0)
        {
            ans += (vec[i].first*1.0 / vec[i].second )*W;
        }
        return ans;
    }
        
};

