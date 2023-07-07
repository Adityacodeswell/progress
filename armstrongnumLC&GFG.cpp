class Solution {
public:
    int exponent(int n) {
        int x = n;
        int power = 0;
        while (x != 0) {
            x = x / 10;
            power = power + 1;
        }
        return power;
    }

    string armstrongNumber(int n) {
        int exp = exponent(n);
        int arms = 0;
        int temp = n; // Store the original number
        while (n != 0) {
            int digit = n % 10;
            n = n / 10;
            arms = arms + pow(digit, exp);
        }
        if (arms == temp) { // Compare with the original number
            return "Yes";
        } else {
            return "No";
        }
    }
};