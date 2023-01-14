class Solution {
public:
    bool isPalindrome(int x) {
        int a=x;
        long long ans=0;
        if(x<0){
            return false;
        }
        
        else{
            while(a!=0){
                ans=ans*10+(a%10);
                a=a/10;
            }
            if(ans==x){
                return true;
            }
            else return false;
        }
    
    }
};