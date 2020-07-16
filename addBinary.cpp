class Solution {
public:
    string addBinary(string a, string b) {
        int p=a.length()-1;
        int q=b.length()-1;
        int carry=0;
        string s="";
        while(p>=0 || q>=0 || carry==1)
        {
            int h=p>=0 ? a[p--]-'0' : 0;
            int m=q>=0 ? b[q--]-'0' : 0;
            int sum=h+m+carry;
            if(sum>=2) 
                carry=1;
            else carry=0;
            s=((sum%2==0) ? "0" : "1")+s; 
        }
         cout<<s;    
        return s;
    }};