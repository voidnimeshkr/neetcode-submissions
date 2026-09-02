class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> output;
        for (int i = 0; i <= n; i++) {
            int temp = i;
            int count = 0;
            while (temp > 0) {
                int remainder = temp % 2;
                temp = temp / 2;
                if (remainder == 1) {
                    count++;
                }
            }
            output.push_back(count);
        }
        return output;
    }
};
