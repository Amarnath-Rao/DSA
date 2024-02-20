class Solution:
    def findLeastNumOfUniqueInts(self, arr: List[int], k: int) -> int:
        mp = collections.Counter(arr)
        v = list(mp.values())
        cnt = 0
        v.sort()
        for i in range(len(v)):
            if k > v[i]:
                k -= v[i]
                v[i] = 0
            else:
                v[i] -= k
                k = 0
            if v[i] != 0:
                cnt += 1
        return cnt



"""
class Solution
{
public:
    int helper(int ind,string prefix,string &s, unordered_set<string>&dict){
        if(ind==s.size())return 0;
        
        prefix+=s[ind];
        if(ind==s.size()-1){
            return dict.find(prefix)!=dict.end();
        }
        
        int op1=0;
        int op2=0;
        if(dict.find(prefix)!=dict.end()){
            op1= helper(ind+1,"",s,dict);
        }
        op2= helper(ind+1,prefix,s,dict);
        return op1||op2;
    }
    int wordBreak(int n, string s, vector<string> &dictionary) {
        //code here
        unordered_set<string>dict;
        for(auto it:dictionary){
            dict.insert(it);
        }
        return helper(0,"",s,dict);
    }
};


"""