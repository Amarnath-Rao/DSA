int Solution::isPalindrome(string A) {
    string x="";
    for(char c:A){
        if(isalnum(c)){
            x+=tolower(c);
        }
    }
    string y=x;
    reverse(y.begin(),y.end());
    return x==y;
}
