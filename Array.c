#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//������������ں��棬����ʹ��֮ǰ��Ҫ������һ��
void bubble_sort(int arr[],int sz);
int main()
{
	int arr[] = { 123,321,1111,2,4,5,999,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//���������ڲ�sizeof(arr)��Ĳ�����������Ĵ�С�������Զ��庯������sizeof�����ָ��Ĵ�С
	bubble_sort(arr,sz);
	int num = 0;
	for (num = 0;num < sz;num++)
	{
		printf("%d ", arr[num]);
	}
	return 0;
}

void bubble_sort(int arr[],int sz)
{
	//����ð������
	int i = 0;
	for (i=0;i<sz-1;i++)
	{
		//һ��ð�������������������
		int j = 0;
		for (j = 0;j < sz -i- 1;j++)//һ�����棬�����Ҫ��������������Ѿ�����Ĵ������ټ�һ
		{
			int temp = 0;
			if (arr[j] > arr[j + 1])
			{
				//�����������ֵ�λ��
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}