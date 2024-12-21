////https://leetcode.com/problems/multiply-strings/
class Solution {
public:
    string multiply(string num1, string num2) { 
     
     if(num1=="0" || num2=="0")
     {
        return "0";
     }
     reverse(num1.begin(),num1.end());
     reverse(num2.begin(),num2.end()); 
     vector<long long>ans(num1.size()+num2.size(),0); 
     for(int i=0;i<num1.size();i++)
     {
        for(int j=0;j<num2.size();j++)
        {
            long long mul=(num1[i]-'0')*(num2[j]-'0'); 
            ans[i+j]+=mul; 
            ans[i+j+1]+=ans[i+j]/10;
            ans[i+j]=ans[i+j]%10;
        }
     } 
     string product="";
     for(int i=ans.size()-1;i>=0;i--)
     {
        if(ans[i]!=0 || !product.empty())
        {
            product+=ans[i]+'0';
        }
     } 
     return product;
        
    }
};
