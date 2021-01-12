#include <iostream>
#include <vector>
using namespace std;
int main()
{

	vector<int> num;
	for (int x = 0; x < 7; x++)
	{
		num.push_back(x);
	}

	for (int i = 0; i < num.size(); i++)
	{

		cout << num[i] << endl;
	}


	
}