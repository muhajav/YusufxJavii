#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	float a, b, c, u, v, w;
	float x, y;
	cout<<"Please input in the following format a, b, c, u, v, w"<<'\n';
	cin>>a>>b>>c>>u>>v>>w;

	if(a<u)
	{
		b = (u/a)*b;
		c = (u/a)*c;
		a = (u/a)*a;
		y = (c-w)/(b-v);
	}
	else if(a>u)
	{
		v = (a/u)*v;
		w = (a/u)*w;
		u = (a/u)*u;
		y = (c-w)/(b-v);
	}
	else {
		y = (c-w)/(b-v);
	}

	x = (c - (y*b)) / a;

	cout<<"x = "<<x<<'\n';
	cout<<"y = "<<y<<'\n';
	
}
