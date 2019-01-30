#include "stdafx.h"
#include "MaoPsoft.h"


MaoPsoft::MaoPsoft(char* arr,int length)
{
	this->length = length;
	this->arr=new char[this->length];//分配内存
	strcpy_s(this->arr,this->length,arr);//拷贝数据
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


char* MaoPsoft::Bubble_soft(void)
{
	int index_in = 0;//内层循环索引
	int index_out = 0;//外层循环索引

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
			}
		}
		cout<<"第"<<index_out+1<<"次排序:";
		print_soft(this->arr,this->length);
	}

	return this->arr;
}
