class Solution {
public:
    int lengthOfLastWord(string s) {
    int n=s.length();
    int i=n-1,length=0;
    while(s[i]==' ')i--;
    while(s[i]!=' ' && i>=0)
    {
        i--;
        length++;
    }
    return length;

    }
};