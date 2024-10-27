class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        while(n != 1)
        {
            if(seen.count(n))
            {
                return false;
            }
            seen.insert(n);
            n = getNext(n);
        }
        return true;
    }

private:
    int getNext(int n) {
        int TotalSum = 0;
        while (n > 0)
        {
            int LD = n % 10;
            TotalSum += LD * LD;
            n /= 10;

        }
        return TotalSum;
             
    }
};
