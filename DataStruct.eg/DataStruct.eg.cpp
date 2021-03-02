#include <iostream>

class SortMethod {
public :
	void bubbleSort(int data[])	//冒泡算法
	{
		//外层循环，遍历次数
		for (int i = 0; i < sizeof(data) - 1; i++)
		{
			//内层循环，进行升序排队
			bool _isReady = true;
			for (int j = 0; j < sizeof(data) - i - 1; j++)
			{
				//内层循环的每次都进行条件判断，获取最大值并移位
				if (data[j] > data[j + 1]) {
					int temp = data[j + 1];
					data[j + 1] = data[j];
					data[j] = temp;

					_isReady = false;
				}
			}
			//如果传入的参数数组本身就是不需要排序的话，就可以直接跳出外层循环
			if (_isReady)
				break;
		}
	}

	void selectSort(int data[])
	{
		for (int j = 0; j < sizeof(data) - 1; j++)
		{
			int index = j;	//保证指针指向的是已排序的最后一个元素
			for (int i = j + 1; i < sizeof(data); i++)
			{
				//大小判断
				if (data[index] > data[i]) {
					index = i;
				}

				//交换两个元素的位置
				if (index != j)
				{
					int temp = data[index];
					data[index] = data[j];
					data[j] = temp;
				}
			}
		}
	}


	/*
	插入排序类似整理扑克牌，将每一张牌插到其他已经有序的牌中适当的位置。
	插入排序由N-1趟排序组成，对于P=1到N-1趟，插入排序保证从位置0到位置P上的元素为已排序状态。
	简单的说，就是插入排序总共需要排序N-1趟，从index为1开始，讲该位置上的元素与之前的元素比较，放入合适的位置，这样循环下来之后，即为有序数组。
	*/
	void insertSort(int data[]) {

	}
};