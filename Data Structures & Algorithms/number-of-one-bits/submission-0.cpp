class Solution {
public:
    int hammingWeight(int n) {
        int result = 0;
        unsigned long long int power = 1;
        int count = 0;

        while (n > 0) {
            int remainder = n % 2;
            n = n / 2;
            result = result + (remainder * power);
            power = power * 10;

            if (remainder == 1) {
                count++;
            }
        }

        return count;
    }
};