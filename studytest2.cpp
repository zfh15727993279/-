#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	//ѡ������
	int numsLen;
	int nums[100] = {};
	/*int numsLen = sizeof(nums) / sizeof(int);*/
	int number;
	/*��СԪ��*/
	int min = nums[0];
	/*��СԪ���±�*/
	int minIndex = 0;
	/*����ý��*/
	int temp;
	int numsLen1;
	cout << "����ѡ���������������ݣ�";
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
	cout << "����������飺";
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
	
	cout << "��С��������";
	for (int i = 0; i < numsLen; i++)
	{
		cout << setw(5) << nums[i];
	}
	cout << endl;
	
	cout << "�Ӵ�С����";
	for (int i = 0; i < numsLen; i++)
	{
		cout << setw(5) << nums[numsLen - i - 1];
	}
	return 0;
}