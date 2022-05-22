#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> s;
	int n, sum = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		if (input)
			s.push(input);
		else
			s.pop();
	}

	while (s.size())
	{
		sum += s.top();
		s.pop();
	}
	
	cout << sum;
	return 0;
}