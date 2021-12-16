#include <iostream>
#include <stdlib.h>
#include <string.h>

static int count = 0;
struct Node* topNode = NULL;
struct Node* tempNode = NULL;

void push(int x);
void pop();
void size();
void empty();
void top();

struct Node
{
	int data;
	struct Node* previous;
};

int main()
{
	int n = 0;
	char command[10];
	//printf("Input count: ");
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x = 0;
		//printf("Input command: ");
		std::cin >> command;
		if (strcmp(command, "push") == 0)
		{
			std::cin >> x;
			push(x);
		}
		else if (strcmp(command, "pop") == 0)
		{
			pop();
		}
		else if (strcmp(command, "size") == 0)
		{
			size();
		}
		else if (strcmp(command, "empty") == 0)
		{
			empty();
		}
		else if (strcmp(command, "top") == 0)
		{
			top();
		}
		else
		{
		}
		command[0] = '\0';
	}
	return 0;
}

void push(int x)
{
	if (topNode == NULL)
	{
		topNode = (struct Node*)malloc(sizeof(struct Node));
		if (topNode == NULL)
		{
			free(topNode);
		}
		else
		{
			topNode->data = x;
			topNode->previous = NULL;
			count++;
		}
	}
	else
	{
		tempNode = (struct Node*)malloc(sizeof(struct Node));
		if (tempNode == NULL)
		{
			free(tempNode);
		}
		else
		{
			tempNode->data = x;
			tempNode->previous = topNode;
			topNode = tempNode;
			count++;
		}
	}
}

void pop()
{
	if (topNode == NULL)
	{
		printf("-1\n");
	}
	else
	{
		int temp = topNode->data;
		tempNode = topNode->previous;
		free(topNode);
		topNode = NULL;
		topNode = tempNode;
		count--;
		printf("%d\n", temp);
	}
}

void size()
{
	printf("%d\n", count);
}

void empty()
{
	if (count == 0)
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}
}

void top()
{
	if (topNode == NULL)
	{
		printf("-1\n");
	}
	else
	{
		int temp = topNode->data;
		printf("%d\n", temp);
	}
}