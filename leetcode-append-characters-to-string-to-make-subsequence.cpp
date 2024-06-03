class Solution {
public:
    int appendCharacters(string s, string t) {
        int si=0,ti=0,sn=s.length(),tn=t.length();
        while(si<sn && ti<tn){
            if(s[si]==t[ti]){
                ti++;
            }si++;
        }
        return tn-ti;
    }
};