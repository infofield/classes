#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

class ReversibleString {
public:
	ReversibleString() {}
	ReversibleString(const string& new_s) {
		s = new_s;
	}
	string ToString() const {
		return s;
	}
	void Reverse() {
		reverse(begin(s), end(s));
	}
public:
	string s;	
};

int main() {
	ReversibleString s("live");
	s.Reverse();
	cout << s.ToString() << endl;

	s.Reverse();
	const ReversibleString& s_ref = s;
	string tmp = s_ref.ToString();
	cout << tmp << endl;

	ReversibleString empty;
	cout << '"' << empty.ToString() << '"' << endl;

	return 0;
}