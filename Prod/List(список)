#include<iostream>
#include<cstring>
using namespace std;


struct Node 
{
	int data;	
	Node *next;	
};


void print(Node * head)
{
	while (head)
	{
		cout << head->data<<"  ";
		head = head->next;
	}
}




Node * insert(Node * head, int value,int pos)	
{

	Node * cur = (Node *)malloc(sizeof(Node));	
	cur->data = value;	
	cur->next = NULL;	


	if (pos == 0) //дбовление элемента в начало списка
	{
		cur->next = head;	//указатель нового элемента направленный на текущую голову
		head = cur;		//смещение глобалной головы списка
		return head;
	}

	Node * element = head;	//создали вспомогательный

	for (int i = 0; i <= pos && element; i++, element->next); //поиск позиции для вставки элемента
	
	
	if (element)	//проверка на допустимость позиции
	{
	cur ->next =  element->next;	//присвоение новому элементу указателя на элемент после него в списке
	element->next = cur;	//присвоение предыдущему элементу указателя на новый элемент
	}

	else cout << "Error";
	return head;
	

	
	
}


Node * getLast(Node * head)
{
	if (head == NULL)
	{
		return head;
	}

	while (head->next)
	{
		head->next = head;
	}
	return head;
}



Node * add_back(Node * head, int value) //добавление элемента в конец
{
	Node *last = getLast(head);
	Node * cur = (Node *)malloc(sizeof(Node));
	cur->data = value;
	cur->next = NULL;
	last->next = cur;
	return head;

}









void  remove(Node **head,int value)	
{
	int temp;
	Node * cur = *head, *prev = NULL;
	
	while (cur->data != value && cur)	//поиск элементов по значению || конец списка
	{
		prev = cur;		//сохраняем текущий элемент
		cur = cur->next;	//переход к следущему элементу
	}

	if (cur)	//если нашли искомый элемент
	{
		if (prev)	//если перед ним есть предыдущий
			prev->next = cur->next;		//переставление указателя из предыдущего элемента на следущий за удаляемым
		
		else   //если удаляем первый
			*head = cur->next;		//изменяем голову на следущий за удаляемым


	free(cur);
	return;
	}

	if (*head) cout << "Element not found"<<endl;
	else cout << "List is empty"<<endl;

	
	


}


int main()
{
	Node * list = NULL;
	list = insert(list, 10, 0);
	list = insert(list, 20, 0);
	list = insert(list, 11, 1);
	print(list);
	cout << endl;

	list = insert(list, 100, 1);
	list = insert(list, 201, 1);
	list = insert(list, 113, 1);
	print(list);
	cout << endl;

	remove(&list, 100);
	print(list);
	cout << endl;


	remove(&list, 20);
	print(list);
	cout << endl;

	list = add_back(list,87);
	print(list);
	cout << endl;
	

	



	cout << endl;
	return 0;
}
