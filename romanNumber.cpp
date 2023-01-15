class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        for(int i=0; i<s.length()-1; i++){
            if(s[i]=='C' && s[i+1]=='M'){
                ans=ans-2*(100);
            }
            if(s[i]=='I' && s[i+1]=='V'){
                ans=ans-2*(1);
            }
            if(s[i]=='X' && s[i+1]=='L'){
                ans=ans-2*(10);
            }
            if(s[i]=='X' && s[i+1]=='C'){
                ans=ans-2*(10);
            }
            if(s[i]=='I' && s[i+1]=='X'){
                ans=ans-2*(1);
            }
            if(s[i]=='C' && s[i+1]=='D'){
                ans=ans-2*(100);
            }
        }
        for(int i=0; i<s.length(); i++){
            if(s[i]=='I'){
                ans=ans+1;
            }
            if(s[i]=='V'){
                ans=ans+5;
            }
            if(s[i]=='X'){
                ans=ans+10;
            }
            if(s[i]=='L'){
                ans=ans+50;
            }
            if(s[i]=='C'){
                ans=ans+100;
            }
            if(s[i]=='D'){
                ans=ans+500;
            }
            if(s[i]=='M'){
                ans=ans+1000;
            }
            
        }
        return ans;
    }
};