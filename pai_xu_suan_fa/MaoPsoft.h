#pragma once
#include <string>
#include <iostream>

using namespace std;
class MaoPsoft
{
public:
	MaoPsoft(char* arr,int length);
	~MaoPsoft(void);
	char* Bubble_soft(void);
	void print_soft(char* input,int length);

private:
	char* arr;//待排序数组
	int length; //待排序数组的长度
};

