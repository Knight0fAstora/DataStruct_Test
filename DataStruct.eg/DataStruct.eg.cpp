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

	void insertSort(int data[]) {

	}
};