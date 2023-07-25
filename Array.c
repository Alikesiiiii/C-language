#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//如果函数定义在后面，则在使用之前需要先声明一下
void bubble_sort(int arr[],int sz);
int main()
{
	int arr[] = { 123,321,1111,2,4,5,999,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//在主函数内部sizeof(arr)算的才是整个数组的大小，而在自定义函数里面sizeof算的是指针的大小
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
	//升序冒泡排列
	int i = 0;
	for (i=0;i<sz-1;i++)
	{
		//一趟冒泡排序的完整过程如下
		int j = 0;
		for (j = 0;j < sz -i- 1;j++)//一趟里面，最多需要排序数组个数减已经排序的次数，再减一
		{
			int temp = 0;
			if (arr[j] > arr[j + 1])
			{
				//交换两个数字的位置
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}