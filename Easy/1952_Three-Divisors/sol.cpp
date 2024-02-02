class Solution {
public:
    bool isThree(int n) {
        
        int divisors = 0;

        for (int i = n; i != 0; i--) {
            if (n % i == 0){
                divisors++;
            }
        }

        if (divisors == 3)return true;

        return false;
    }
};