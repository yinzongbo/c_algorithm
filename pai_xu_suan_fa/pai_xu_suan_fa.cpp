// pai_xu_suan_fa.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "MaoPsoft.h"
#include <vector>

int _tmain(int argc, _TCHAR* argv[])
{
	//char test[]={9,8,7,6,5,4,3,2,1,0};
	char test[]={3,44,38,5,47,15,36,26,27,2,46,4,19,50,48};
	char* res;

	MaoPsoft a1(test,15);
	//ð������
	res = a1.Bubble_soft();

	cout<<"ð�������Ľ��:"<<endl;
	a1.print_soft(res,15);

	MaoPsoft a2(test,15);
	//ѡ������
	res = a2.Select_soft();
	cout<<"ѡ�������Ľ��:"<<endl;
	a2.print_soft(res,15);


	getchar();

	return 0;
}

