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

/*void AddNumToAPossition(List& list)
{
	int Pos; //possion
	unsigned int NewNum;
	char Ans = 'a';
	printf("Do you want to add new number to the nodes?\n");
	rewind(stdin);
	printf("Type the answer (Yes/No) \n");
	rewind(stdin);
	scanf("%c", &Ans);
	switch (Ans)
	{
	case('Yes'):
		if (list.num != SIZE)
		{
			printf("Type the 'NewNum' that u want to add at the 'Pos': ");
			scanf("%d", &NewNum);
			do
			{
				printf("Type the 'Pos' that u want to add the 'NewNum': ");
				scanf("%d", &Pos);
			} while (Pos > list.num);

			for (int i = Pos; i <= list.num; i++)
			{
				list.nodes[i + 1] = list.nodes[i];
			}
			list.nodes[Pos] = NewNum;
			list.num++;
			printf("----Nodes after add at the end----\n");
			for (int i = 0; i < list.num; i++)
			{
				printf("nodes[%d] = %d\t", i, list.nodes[i]);
			}
			printf("\n");
		}
		else
			printf("The list is full");
		break;
	case('No'):
		break;
	break;
	}
}*/

/*void DeleteNumInAPossition(List list)
{
	int Pos; //possion
	if (list.num != 0)
	{
		do
		{
			printf("Type the 'Pos' that u want to delete: ");
			scanf("%d", &Pos);
		} while (Pos > list.num);

		for (int i = Pos; i <= list.num - 1; i++)
		{
			list.nodes[i] = list.nodes[i+1];
		}
		list.num--;
		printf("----Nodes after delete----\n");
		for (int i = 0; i < list.num; i++)
		{
			printf("nodes[%d] = %d\t", i, list.nodes[i]);
		}
	}
	else
		printf("The list is empty");
}*/

void PrintTheNodes(List list)
{
	printf("\nYour nodes:\n");
	for (int i = 0; i < list.num; i++)
	{
		printf("nodes[%d] = %d\t", i, list.nodes[i]);
	}
	printf("\n");
}

/*void SortAscending(List& list)
{
	for (int i = 0; i < list.num - 1; i++)
	{
		for (int j = i + 1; j < list.num; i++)
		{
			int temp = list.nodes[i];
			if (list.nodes[i] > list.nodes[j])
			{
				list.nodes[i] = list.nodes[j];
				list.nodes[j] = temp;
			}
		}
	}
}*/

int SearchBinary(List& list, int NewNum)
{
	int L = 0;
	int R = list.num - 1;
	while (L <= R)
	{
		int M = (L + R) / 2;
		int Pos = M;
		if (list.nodes[M] < NewNum)
		{
			L = M + 1;
			return Pos;
		}
		else
			if (list.nodes[M] > NewNum)
			{
				R = M - 1;
				return Pos;
			}
			else
				return Pos;
	}
}

void AddNumAndSortAscending(List& list)
{
	int NewNum = 40;
	list.num++;
	int Pos2 = SearchBinary(list, NewNum);

	for (int i = Pos2; i <= list.num; i++)
	{
		list.nodes[i + 1] = list.nodes[i];
	}
	list.nodes[Pos2] = NewNum;


	printf("----Nodes after add at the end----\n");
	for (int i = 0; i < list.num; i++)
	{
		printf("nodes[%d] = %d\t", i, list.nodes[i]);
	}
	printf("\n");
}

int main()
{
	List list;
	int x = 0;
	//srand(unsigned int(TIME(NULL)));
	Createnumber(list);
	EnterNumOfTheNodes(list);
	PrintNum(list);
	CheckFullnessOfTheNodes(list);
	CheckEmtinessOfTheNodes(list);
	PrintTheNodes(list);
	SortAscending(list);
	//AddNumToAPossition(list);
	//DeleteNumInAPossition(list);
	AddNumAndSortAscending(list);
}
