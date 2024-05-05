class Solution {
public:
    string interpret(string command) {
        string st;
        for(int i=0;i<command.length();i++){
            if (command[i]=='G') st+='G';
            else if (command[i]=='(' and command[i+1]==')') st+='o';
            else if (command[i]=='(' and command[i+1]=='a') st+="al";
        }
        return st;
    }
};