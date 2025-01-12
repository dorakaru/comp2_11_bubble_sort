#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

static void swap(item* p, item* q)
{
	item tmp = *p;
	*p = *q;
	*q = tmp;
}

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if (begin == NULL || end == NULL)
		return false;

	if (end < begin)
		return false;

	for (item* it = begin; it != end; it++)
	{
		for (item* p = begin + (end - 1 - begin); p != it; p--)
		{
			if (p->key < (p - 1)->key)
			{
				swap(p, p - 1);
			}
		}
	}

	return true;
}
