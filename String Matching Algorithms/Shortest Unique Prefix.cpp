// Find shortest unique prefix for every word 
// Given an array of words, find all shortest unique prefixes to represent each word in the given array.
//  Assume that no word is prefix of another.

// Examples:

// Input: arr[] = {"zebra", "dog", "duck", "dove"}
// Output: dog, dov, du, z
// Explanation: dog => dog
//              dove = dov 
//              duck = du
//              zebra   => z

// Input: arr[] =  {"geeksgeeks", "geeksquiz", "geeksforgeeks"};
// Output: geeksf, geeksg, geeksq}

#include<bits/stdc++.h>
using namespace std;

// 1) Construct a Trie of all words. Also maintain frequency of every node
//  (Here frequency is number of times node is visited during insertion).
//   Time complexity of this step is O(N) where N is total number of characters in all words.

// 2) Now, for every word, we find the character nearest to the root with frequency as 1.
//  The prefix of the word is path from root to this character. To do this, we can traverse
//   Trie starting from root. For every node being traversed, we check its frequency.
//    If frequency is one, we print all characters from root to this node and don’t traverse down this node.

class trie{
    public:
    int freq;
    trie *nxt[26];
    trie(){
        freq = 0;
        for( int i = 0; i < 26; i++ ){
            nxt[i] = NULL;
        }
    }
};

trie *root=new trie();

void insert(string s)
{
    trie *curr=root;
    for(int i=0;i<s.size();i++)
    {
        if(curr->nxt[s[i]-'a']== NULL)
        {
            curr->nxt[s[i]-'a']=new trie();
        }
        curr->nxt[s[i]-'a']->freq++;
        curr=curr->nxt[s[i]-'a'];
    }
   
}

int find( string s){
    trie *curr=root;
    for(int i=0;i<s.size();i++)
    {
        if(curr->nxt[s[i]-'a']->freq==1)
        {
            return i;
        }
        curr=curr->nxt[s[i]-'a'];
    }
    return -1;
}

vector<string> prefix(vector<string> ar) {
    int n = ar.size();
    vector<string> v;
    for( int i = 0; i < n; i++ ){
        int idx = find( ar[i]);
        string s = "";
        for( auto it : ar[i] ){
            if( idx < 0 )break;
            s += it;
            idx--;
        }
        if(s=="")
        {
            v.push_back("Not Possible");
        }
        else
            v.push_back(s);
    }
    return v;
}


int main()
{
	trie t;
	vector<string> words = {"zebra", "dog", "dove", "duck"};
	for (string s : words) insert(s);

	
	vector<string> ans = prefix(words);
    for(auto s: ans)
	    cout <<  s << endl;


	words.push_back("zebras");
	insert("zebras");

    vector<string> ans1 = prefix(words);
    for(auto s: ans1)
	    cout <<  s << endl;

}
