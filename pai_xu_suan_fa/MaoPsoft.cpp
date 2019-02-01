#include "stdafx.h"
#include "MaoPsoft.h"


MaoPsoft::MaoPsoft(char* arr,int length)
{
	this->length = length;
	this->arr=new char[this->length];//分配内存
	int i=0;
	for(i=0;i<length;i++)
	{
		this->arr[i]=arr[i];
	}
	//strcpy_s(this->arr,this->length,arr);//拷贝数据
}


MaoPsoft::~MaoPsoft(void)
{
	cout<<"析构函数释放内存"<<endl;
	delete this->arr;
}

//打印当前的数组内容
void MaoPsoft::print_soft(char* input,int length)
{
	int i=0;
	for(i=0;i<length;i++)
	{
		if(i<length-1)
			printf("%d,",*(input+i));
		else
			printf("%d",*(input+i));
	}
	cout<<endl;//最后输出换行
}

//冒泡排序,从小到大
char* MaoPsoft::Bubble_soft(void)
{
	int index_in = 0;//内层循环索引
	int index_out = 0;//外层循环索引
	bool sorted = false;

	for(index_out=0;index_out<this->length-1;index_out++)
	{
		for(index_in=0;index_in<this->length-index_out-1;index_in++)
		{
			//后面的比前面的小,则进行数据交换
			if(*(this->arr+index_in+1)<*(this->arr+index_in))
			{
				char temp;
				temp = *(this->arr+index_in);
				*(this->arr+index_in)=*(this->arr+index_in+1);
				*(this->arr+index_in+1)=temp;
				sorted = true;
			}
		}
		cout<<"第"<<index_out+1<<"次排序:";
		print_soft(this->arr,this->length);
		if(sorted)
		{
			sorted = false;
			continue;
		}
		else
		{
			cout<<"冒泡排序结束"<<"共排序"<<index_out+1<<"次"<<endl;
			break;
		}
	}

	return this->arr;
}

//选择排序，从小到大
char* MaoPsoft::Select_soft(void)
{
	int index_in = 0;
	int index_out = 0;
	int min_index = 0;
	char temp = 0;
	//char Min = 0;

	//外层循环控制总的趟数
	for(index_out=0;index_out<this->length;index_out++)
	{
		min_index = index_out;
		//内存循环轮询找出最小的值
		for(index_in=index_out+1;index_in<this->length;index_in++)
		{
			if((this->arr[index_in]<this->arr[min_index]))
			{
				/*Min = *(this->arr+index_in);*/
				min_index = index_in; //更新最小索引
			}
		}

		temp = *(this->arr+index_out); //保存待更换位置的数据
		*(this->arr+index_out) = *(this->arr+min_index);//更新待更换位置的数据
		*(this->arr+min_index) = temp;


		cout<<"第"<<index_out+1<<"次排序:";
		print_soft(this->arr,this->length);
	}

	return this->arr;
}
