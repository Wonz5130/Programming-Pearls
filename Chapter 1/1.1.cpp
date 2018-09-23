#include<iostream>
#include<set>
using namespace std;

//依旧没有输出
int main(void){
	set<int> S;
	int i;
	set<int>::iterator j;
	while(cin >> i){
		S.insert(i);
	}
	for(j = S.begin(); j != S.end(); ++j){
		cout << *j << "\n";
	}
	return 0;
}