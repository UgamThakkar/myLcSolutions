class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        //Bezouts identity: it says that we if there exists two numbers lets say a and b then the 
        //greatest common divisor(gcd) of a and b can be expressed as a linear combination of a and b.
        //linear combination implying a linear equation: a*x + b*y = gcd(a,b)
        //And if at any point gcd of a and b becomes 1 that means we can create a combination where
        //the result of the linear equation will be 1 i.e. it will be a good array.
        int g = nums[0];
        for(int i=1; i<nums.size(); i++){
            g = gcd(g, nums[i]);
            if(g==1) return true;
        }
        return g==1;
    }
};