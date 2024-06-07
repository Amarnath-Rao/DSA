#include<bits/stdc++.h>
using namespace std;

void fun(){
    vector<string>dictionary{"cat","bat","rat"};
    string sentence="the cattle was rattled by the battery";
    vector<string>words;
    string word = "";
    for(int i=0; i<sentence.size();i++){
        if(sentence[i]==' ' || i == sentence.size() - 1){
            if(i == sentence.size() - 1) word += sentence[i]; // add the last word
            words.push_back(word);
            word = "";
        } else {
            word += sentence[i];
        }
    }
    for(int i=0;i<words.size();i++){
        for(int j=0;j<dictionary.size();j++){
            if(words[i].find(dictionary[j])==0){
                words[i]=dictionary[j];
            }
        }
    }
    string res="";
    for(int i=0;i<words.size();i++){
        res+=words[i];
        if(i!=words.size()-1) res+=" ";
    }
    cout<<res;
}

int main(){
    fun();
}

/*
class Trie{
public:
    Trie* children[26];
    bool isEnd;
    Trie(){
        for(int i=0;i<26;i++){
            children[i]=nullptr;
        }isEnd=false;
    }
};
class Solution {
public:
    Trie* root;
    Solution() {
        root = new Trie();
    }

    void insert(string word) {
        Trie* node = root;
        for (char c : word) {
            int i = c - 'a';
            if (node->children[i] == nullptr) {
                node->children[i] = new Trie();
            }
            node = node->children[i];
        }
        node->isEnd = true;
    }
    string search(string word) {
        Trie* node = root;
        string result;
        for (char c : word) {
            int i = c - 'a';
            if (node->children[i] == nullptr) {
                return word;
            }
            result += c;
            if (node->children[i]->isEnd) {
                return result;
            }
            node = node->children[i];
        }
        return word;
    }
    string replaceWords(vector<string>& dictionary, string sentence) {
        for (string word : dictionary) {
            insert(word);
        }

        stringstream ss(sentence);
        string word, result;
        while (ss >> word) {
            if (!result.empty()) {
                result += " ";
            }
            result += search(word);
        }
        return result;
    }
};
*/