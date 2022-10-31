class Solution {
public:
		string multiply(string num1, string num2) {
			string res = "";

			for (int j = num2.size() - 1; j >= 0; --j) {
				int carry = 0;
				for (int i = num1.size() - 1; i >= 0 || carry > 0; --i) {
					int a = ((i >= 0) ? (num1[i] - '0') : 0);
					int b = ((j >= 0) ? (num2[j] - '0') : 0);

					int ni = num1.size() - 1 - i;
					int nj = num2.size() - 1 - j;

					if (ni + nj == res.size()) {
						res.push_back('0');
					}

					int x = (res[ni + nj] - '0') + a * b + carry;
					carry = x / 10;
					x %= 10;
					res[ni + nj] = (char)(x + '0');
				}
			}

			while (res.size() > 1 && res.back() == '0') {
				res.pop_back();
			}

			reverse(res.begin(), res.end());
			return res;
		}
};
