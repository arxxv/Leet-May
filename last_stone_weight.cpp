
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxH;
        for (const auto& x : stones) {
            maxH.emplace(x);
        }
        for (int i = 0; i + 1 < stones.size(); ++i) {
            auto x = maxH.top(); maxH.pop();
            auto y = maxH.top(); maxH.pop();
            maxH.emplace(abs(x - y));
        }
        return maxH.top();
    }
};
