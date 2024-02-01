"""
class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        
        int check[26]={0};
        for(int i=0;i<s.length();i++)
        {   
            if(s[i]!=32)
            check[tolower(s[i])-'a']++;
        }
        for(int i=0;i<26;i++)
            if(check[i]==0)
                return 0;
        return 1;
        // your code here
    }

};

"""