#include<iostream>
#include<string>
#include<map>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
	map<string, int>mp;
	set<string>st;
	string x, y;
	while (cin >> x >> y)
	{
		if (mp.count(x) == 0) mp.insert(pair<string, int>(x, 1));
		else mp[x]++;
		st.insert(y);
	}
	cout << "HALL OF MURDERERS" << endl;
	for (auto it = mp.begin(); it != mp.end(); it++)
	{
		if (st.count(it->first)) continue;
		else cout << it->first << " " << it->second << endl;
	}
	return 0;
}