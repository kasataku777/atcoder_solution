#include<iostream>
#include<string>
using namespace std;

int main() {

	string s;

	int a;
	cin >> a >> s;
	if (a < 3200) {
		cout << "red" << endl;
	}
	else {
		cout << s << endl;
	}
}