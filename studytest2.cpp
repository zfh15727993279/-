#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	//选择排序
	int numsLen;
	int nums[100] = {};
	/*int numsLen = sizeof(nums) / sizeof(int);*/
	int number;
	/*最小元素*/
	int min = nums[0];
	/*最小元素下标*/
	int minIndex = 0;
	/*交换媒介*/
	int temp;
	int numsLen1;
	cout << "这是选择排序，请输入数据：";
	for ( numsLen1 = 0;;numsLen1++)
	{
		cin >> number;
		nums[numsLen1] = number;
		if (number == 9527)
		{
			break;
		}
	}
	numsLen = numsLen1;
	cout << "您输入的数组：";
	for (int i = 0; i < numsLen; i++)
	{
		cout << setw(5) << nums[i];
	}
	cout << endl;
	for (int i = 0; i < numsLen - 1; i++)
	{
		min = nums[i];
		minIndex = i;
		for (int j = i + 1; j <= numsLen - 1; j++)
		{
			if (nums[j] < min)
			{
				min = nums[j];
				minIndex = j;
			}
		}
		if (minIndex > i)
		{
			temp = nums[minIndex];
			nums[minIndex] = nums[i];
			nums[i] = temp;
		}
	}
	
	cout << "从小到大排序：";
	for (int i = 0; i < numsLen; i++)
	{
		cout << setw(5) << nums[i];
	}
	cout << endl;
	
	cout << "从大到小排序：";
	for (int i = 0; i < numsLen; i++)
	{
		cout << setw(5) << nums[numsLen - i - 1];
	}
	return 0;
}