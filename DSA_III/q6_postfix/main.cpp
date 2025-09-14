#include <bits/stdc++.h>
using namespace std;

int evaluatePostfix(char* exp)
{
	stack<int> st;
	int i;

	for (i = 0; exp[i]; ++i) {

		if (exp[i] == ' ')
			continue;

		else if (isdigit(exp[i])) {
			int num = 0;

			while (isdigit(exp[i])) {
				num = num * 10 + (int)(exp[i] - '0');
				i++;
			}
			i--;

			st.push(num);
		}

		else {
			int val1 = st.top();
			st.pop();
			int val2 = st.top();
			st.pop();

			switch (exp[i]) {
			case '+':
				st.push(val2 + val1);
				break;
			case '-':
				st.push(val2 - val1);
				break;
			case '*':
				st.push(val2 * val1);
				break;
			case '/':
				st.push(val2 / val1);
				break;
			}
		}
	}
	return st.top();
}

int main()
{
	//Input
	char exp[] = "10 20 + 4 / 5 * 4 +";
	//Output
	cout << "Answer is: ";
	cout << evaluatePostfix(exp);
	return 0;
}

