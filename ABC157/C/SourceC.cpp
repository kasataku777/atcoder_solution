#include<iostream>

using namespace std;


int main() {

	int n, m;

	cin >> n >> m;
	int s[5], c[5];

	for (int i = 0; i < m; i++) {
		cin >> s[i] >> c[i];
	}

	bool is_exist=true;

	for (int i =0 ; i < m; i++) {
		if (n != 1 && s[i] == 1 && c[i] == 0)is_exist = false;
	}
	for (int i = 0; i < m-1; i++) {
		for (int j = i + 1; j < m; j++) {
			if (s[i] == s[j]) {
				if (c[i] != c[j])is_exist = false;
			}
		}
	}

	if (is_exist) {

		if (n == 1) {
			int a1 = 0;
			for (int i = 0; i < m; i++) {
				a1 = c[i];
			}
			cout << a1 << endl;
		}
		else if (n == 2) {
			int a1 = 1;
			int a2 = 0;
			for (int i = 0; i < m; i++) {
				if (s[i] == 1)a1 = c[i];
				if (s[i] == 2)a2 = c[i];

			}

			cout << a1 * 10 + a2 << endl;

		}
		else {
			int a1 = 1;
			int a2 = 0;
			int a3 = 0;
			for (int i = 0; i < m; i++) {
				if (s[i] == 1)a1 = c[i];
				if (s[i] == 2)a2 = c[i];
				if (s[i] == 3)a3 = c[i];

			}
			cout << a1 * 100 + a2 * 10 + a3 << endl;
		}
	}
	else {
		cout << -1 << endl;
	}
	

	return 0;

}