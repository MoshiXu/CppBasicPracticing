#include<iostream>
#include<vector>
using namespace std;

/*
int main()
{
	int target = 9;
	vector<int>nums = { 2,7,11,15 };
	vector<int>temp,twoSum;
	vector <int> ::iterator i, j;
	int count;

	for (i = nums.begin(); i != nums.end(); i++)
	{
		temp.push_back(target - *i);
	}

	for (i = nums.begin(), count = 0; i != nums.end(); i++, count++)
	{
		for (j = temp.begin(); j < temp.end(); j++)
		{
			if (*i == *j)
				//cout << count << endl;
				twoSum.push_back(count);
		}
	}

	vector<int>::iterator k;
	for (k = twoSum.begin(); k != twoSum.end(); k++)
	{
		cout << *k << endl;
	}

}
*/

class Solution
{
	vector<int> twoSum(vector<int>& nums, int target)
	{
		vector<int>temp, twoSum;
		vector <int> ::iterator i, j;
		int count;

		for (i = nums.begin(); i != nums.end(); i++)
		{
			temp.push_back(target - *i);
		}

		for (i = nums.begin(), count = 0; i != nums.end(); i++, count++)
		{
			for (j = temp.begin(); j < temp.end(); j++)
			{
				if (*i == *j)
					twoSum.push_back(count);
			}
		}

		return twoSum;
	}
};

