#include "stdafx.h"
#include "MaoPsoft.h"


MaoPsoft::MaoPsoft(char* arr,int length)
{
	this->length = length;
	this->arr=new char[this->length];//�����ڴ�
	int i=0;
	for(i=0;i<length;i++)
	{
		this->arr[i]=arr[i];
	}
	//strcpy_s(this->arr,this->length,arr);//��������
}


MaoPsoft::~MaoPsoft(void)
{
	cout<<"���������ͷ��ڴ�"<<endl;
	delete this->arr;
}

//��ӡ��ǰ����������
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
	cout<<endl;//����������
}

//ð������,��С����
char* MaoPsoft::Bubble_soft(void)
{
	int index_in = 0;//�ڲ�ѭ������
	int index_out = 0;//���ѭ������
	bool sorted = false;

	for(index_out=0;index_out<this->length-1;index_out++)
	{
		for(index_in=0;index_in<this->length-index_out-1;index_in++)
		{
			//����ı�ǰ���С,��������ݽ���
			if(*(this->arr+index_in+1)<*(this->arr+index_in))
			{
				char temp;
				temp = *(this->arr+index_in);
				*(this->arr+index_in)=*(this->arr+index_in+1);
				*(this->arr+index_in+1)=temp;
				sorted = true;
			}
		}
		cout<<"��"<<index_out+1<<"������:";
		print_soft(this->arr,this->length);
		if(sorted)
		{
			sorted = false;
			continue;
		}
		else
		{
			cout<<"ð���������"<<"������"<<index_out+1<<"��"<<endl;
			break;
		}
	}

	return this->arr;
}

//ѡ�����򣬴�С����
char* MaoPsoft::Select_soft(void)
{
	int index_in = 0;
	int index_out = 0;
	int min_index = 0;
	char temp = 0;
	//char Min = 0;

	//���ѭ�������ܵ�����
	for(index_out=0;index_out<this->length;index_out++)
	{
		min_index = index_out;
		//�ڴ�ѭ����ѯ�ҳ���С��ֵ
		for(index_in=index_out+1;index_in<this->length;index_in++)
		{
			if((this->arr[index_in]<this->arr[min_index]))
			{
				/*Min = *(this->arr+index_in);*/
				min_index = index_in; //������С����
			}
		}

		temp = *(this->arr+index_out); //���������λ�õ�����
		*(this->arr+index_out) = *(this->arr+min_index);//���´�����λ�õ�����
		*(this->arr+min_index) = temp;


		cout<<"��"<<index_out+1<<"������:";
		print_soft(this->arr,this->length);
	}

	return this->arr;
}
