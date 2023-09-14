#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s;
	cin >> s;

	if ("SONGDO" == s) {
		cout << "HIGHSCHOOL";
	}
	else if ("CODE" == s) {
		cout << "MASTER";
	}
	else if ("2023" == s) {
		cout << "0611";
	}
	else {
		cout << "CONTEST";
	}

	return 0;
}