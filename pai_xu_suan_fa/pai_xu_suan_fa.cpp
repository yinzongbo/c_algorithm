// pai_xu_suan_fa.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "MaoPsoft.h"

int _tmain(int argc, _TCHAR* argv[])
{
	char test[]={9,8,7,6,5,4,3,2,1,0};

	MaoPsoft a1(test,10);
	char* res = a1.Bubble_soft();

	cout<<"排序后的结果:"<<endl;
	a1.print_soft(res,10);

	getchar();

	return 0;
}

