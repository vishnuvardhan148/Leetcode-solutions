class Solution
{
public:
    const char* s = "IVXLCDM";
    const int ptrn[12] = {0, 0, -1, -1, -1, -1, 0, -1, -1, -1, -1, 1};
    string intToRoman(int num, int i = 1)
    {
        if (!num) return "";
        if (num < 10)
        {
            string ret = "";
            int r = num + 1, l = r / 5 * 5 + 1;
            if (r < l) swap(l, r);
            l += l == 1;
            while (l <= r) ret += s[i + ptrn[l++]];
            return ret;
        }
        return intToRoman(num / 10, i + 2) + intToRoman(num % 10, i);
    }
};