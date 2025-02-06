#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	int n; cin >> n;
	long long s = (long long)n * (n + 1) / 2;
	cout << s << endl;
	return 0;
}

