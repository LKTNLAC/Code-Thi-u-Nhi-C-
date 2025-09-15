#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 50


struct List
{
	int num; //So nut
	int nodes[SIZE]; //Mang 1 chieu cua cac nut
};

void Createnumber(List& list)
{
	printf("Enter the number of the list: ");
	scanf("%d", &list.num);
}

void EnterNumOfTheNodes(List& list)
{
	for (int i = 0; i < list.num; i++)
	{
		list.nodes[i] = rand() % 50 + 1;
	}
}

void PrintNum(List list)
{
	for (int i = 0; i < list.num; i++)
	{
		printf("\nthe nodes[%d] = %d\n",i, list.nodes[i]);
	}
}

void CheckFullnessOfTheNodes(List list)
{
	printf("Check Fullness Of The Nodes (Full -> 0; Can Add -> 1): ");
	if (list.num == SIZE)
		printf("0\n");
	else
		printf("1\n");
}

void CheckEmtinessOfTheNodes(List list)
{
	printf("Check Emtiness Of The Nodes (Empty -> 0; Added -> 1): ");
	if (list.num == 0)
		printf("0\n");
	else
		printf("1\n");
}

void PrintTheNodes(List& list)
{
	printf("\nYour nodes:\n");
	for (int i = 0; i < list.num; i++)
	{
		printf("nodes[%d] = %d\t", i, list.nodes[i]);
	}
	printf("\n");
}

void DeleteNum(List list)
{
    int x =42;
    for (int i = 0; i < list.num; i++)
	{
		if(list.nodes[i]==x)
        {
            for (int j = i; j < list.num; j++)
            {
                list.nodes[j] = list.nodes[j+1];
            }
             list.num--;
        }
	}

	printf("\n");

	for (int i = 0; i < list.num; i++)
	{
		printf("nodes[%d] = %d\t", i,list.nodes[i]);
	}
}

int main()
{
	List list;
	//srand(unsigned int(TIME(NULL)));
	Createnumber(list);
	EnterNumOfTheNodes(list);
	PrintNum(list);
	CheckFullnessOfTheNodes(list);
	CheckEmtinessOfTheNodes(list);
	PrintTheNodes(list);
	DeleteNum(list);
}
