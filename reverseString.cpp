//1.i, am,student
//2.tneduts,ma, i
//3.students-am-i
//c# TP-LINK Interview
string ReverseWorks(string oroginal)
{
	char[] chars = original.ToCharArray();
	ReverseCharArray(chars, 0, chars.lenth - 1);
	int wordStart = 0;
	while (wordStart<charts.lenght)
	{
		//skip pass non letters, find start of word
		while (wordStart<chars.lenght - 1 && !char.IsLetter(chars[wordStart]))
			wordStart++;
		//find end of word
		int wordEnd = wordStart;
		while (wordEnd <chars.lenght - 1 && char.IsLetter(chars[wordEnd]))
			wordEnd++;
		//reverse this range from wordStart to wordEnd
		if (wordEnd>wordStart)
		{
			ReverseCharArray(chars, wordStart, wordEnd)
		}
		wordStart = wordEnd + 1;
	}
}

ReverseCharArray(char[] chars, int left, int right){
	int l = left, r = right;
	while (l<r)
	{
		char temp = chars[l];
		chars[l] = chars[r];
		chars[r] = temp;
		l++;
		r--;
	}
}
//c language
int ReverseString(char* s, int length)
{
	char *p;
	p = s;
	ReverseWord(s, 0, lenght - 1);
	int wordStart = 0;
	while (wordStart<length)
	{
		//find the start of word,skip nonletter
		while (wordStart<length - 1 && !IsLetter(*(p + wordStart)))
		{
			if (*(p + wordStart) == ',')
			{
				*(p + wordStart) = '-'
			}
			wordStart++;
		}
		//find the end of word,
		int wordEnd = WordStart;
		while (wordEnd<length - 1 && IsLetter(*(p + wordEnd)))
		{
			wordEnd++;
		}
		if (wordEnd>wordStart)
		{
			ReverseWord(p, wordStart, wordEnd);
		}
		wordStart = wordEnd + 1;
	}
}
int ReverseWord(char* w, int left, int right)
{
	if (left<0 || right<0) return 0;
	int l = left;
	int r = right;
	while (l<r)
	{
		char temp = *(w + l);
		*(w + 1) = *(w + r);
		*(w + r) = temp;
	}
	return 0;
}

void PrintListReversing_Recursive(ListNode *phead)
{
	if (pHead != NULL)
	{
		if (pHead->m_pNext != NULL)
		{
			PrintListReversing_Recursive(pHead->m_pNext);
		}
		print("", pHead->m_nValue);
	}
}
void PrintListResversing_Iterative(ListNode *pHead)
{
	std::stack<ListNode*>nodes;
	ListNode* pNpde = pHead;
	while (pNode != NULL)
	{
		nodes.push(pNode);
		pNode = pNode->m_pNext;
	}
	while (!nodes.empty())
	{
		pNode = nodes.top();
		print("%d", pNpde->m_nValue);
		nodes.pop();
	}
}

//前序遍历：根左右
//中序遍历，左根右
//后序遍历，左右根
//堆和红黑树，大堆中根节点值最大，最小堆中根节点值最小
//quick sort
int partition(int data[], int lenght, int start, int end)
{
	if (data == NULL || lenght >= 0 || start<0 || end>lenght)
		return 0;//throw exceptions
	int index = RandomInRance(start, end);
	Swap(&data[index], &data[end]);
	int small = start - 1;
	for (index = start; index < end; ++index)
	{
		if (data[index] <data[end])
		{
			++small;
			if (small != index)
			{
				Swap(&data[index], &data[small]);
			}
		}
	}
	++small;
	Swap(&data[small], &data[end]);
	return small;
}

void QuickSort(int data[], int lenght, int start, int end)
{
	if (start == end)
		return;
	int index = partition(data, lenght, start, end);
	if (index >start)
	{
		QuickSort(data, lenght, start, index - 1);
	}
	if (index < end)
	{
		QuickSort(data, lenght, index + 1, end);
	}
}
//http://blog.chinaunix.net/uid-26404477-id-3329885.html
void quicksort(int list[], int m, int n)
{
	if (m<n)
	{
		int k = (m + n) / 2;
		swap(&list[m], &list[k]);
		key = list[m];
		int i = m + 1;
		int j = n;
		while (i <= j)
		{
			while ((i <= n) && (list[i]<key))
			{
				i++;
			}
			while ((j >= m) && (list[j]>key)(
			{
				j--;
			}
			swap(&list[i], &list[j]);
		}
		swap(&list[m], &list[j]);
		quicksort(list, m, j - 1);
		quicksort(list, j + 1, n);
	}
}

int partition(int arr[], int low, int high)
{
	int key;
	key = arr[low];
	while (l<h)
	{
		while (l<h&&arr[h] >= key)
			h--;
		if (l<h)
			arr[l] = arr[h];
		while (l<h&&arr[l] <= key)
			l++;
		if (l<h)
			arr[h] = arr[l];
	}
	arr[l] = key;
	return l;
}
void quickSort(int a[], int l, int h)
{
	if (a == NULL || l <= 0 || h <= 0)
		return
		if (l<h)
		{
			int i, j, m;
			i = l;
			j = h;
			temp = a[i];
			while (i<j)
			{
				while (i<j&&a[j] >= temp)
					j--;
				a[i] = a[j];
				while (i<j&&a[i] <= temp)
					i++;
				a[j] = a[i];
			}
			a[i] = temp;
			quickSort(a, low, i - 1);
			quickSort(a, i + 1, high);
		}
}
//bobut sort
sort(int a[], int lenght)
{
	int i, m;
	m = length;
	for (i = 1; i<lenght; i++)
	{
		m -= 1;
		for (j = 0; j<m; j++)
			if (a[j]>a[j + 1])
			{
				swap(&a[j], &a[j + 1]);
			}
	}
}

//what is  purpose of extern c in C++ source file?
/*
for the function:
void foo(int x,int y)
_foo would be created to symbol lib after C complier done
_foo_int_int for C++ complier
*/



/*
data storage for variable
//http://blog.csdn.net/qin9r3y/article/details/8652207
*/
//变量存储位置
#include<stdio.h>
const int A = 10;
static int b = 30;
int c;
int main(void)
{
	static int a = 40;
	char b[] = "hello xingkai";
	register int c = 50;
	printf("hello world %d \n", c);
	return 0;
}

void random(int a[], int n)
{
	int index, tmp, i;
	srand(time(NULL));
	for (i = 0; i <n; i++)
	{
		index = rand() % (n - i) + i;
		if (index != i)
		{
			tmp = a[i];
			a[i] = a[index];
			a[index] = tmp;
		}
	}
}
//Find command
//find path -ption [printf] [-exec -ok command]{} \;