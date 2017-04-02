//ex 1
#include<iostream>
using namespace std;

const int size = 20;

struct LIFO
{
	char stack[size];
	int top;
};

void push(LIFO *st,char ch)
{
	if (st->top == size)
	{
		cout << "Stack is overflowed\n";
		return;
	}
	st->stack[st->top] = ch;
	st->top++;
}

char pop(LIFO * st)
{
	if (st->top == 0)
	{
		cout << "Stack is empty\n";
		return 0;
	}
	st->top--;
	return st->stack[st->top];
}

bool check(char * str)
{
	bool flag = true;
	LIFO st;
	st.top = 0;
	int i = 0;
	

	while (str[i])
	{
		if (str[i] == '(')push(&st, str[i]);
		if (str[i ] == '[')push(&st, str[i]);
		if (str[i] == '{')push(&st, str[i]);


		else if (str[i] == ']')
		{
			if (st.top != 0)pop(&st);
			else flag = false;
		}


		else if (str[i] == ')')
		{
			if (st.top != 0)pop(&st);
			else flag = false;
		}


		else if (str[i] == '}')
		{
			if (st.top != 0)pop(&st);
			else flag = false;
		}



			i++;
		}
		if (st.top != 0)flag = false;
		return flag;



	}


int main()
{
	char str[100], *s, oper[19];
	cout << "Input skobki:  ";
	cin >> str;
	cout << boolalpha << check(str)<<"\n";
		   

	return 0;
}




---------------------------------------------------------------------------------------------------------------------
Динамический стэк

#include<iostream>
using namespace std;

struct LIFO
{
	char data;
	LIFO * prev;
};
LIFO * push(LIFO *top, char ch)
{
	LIFO * cur = (LIFO*)malloc(sizeof(LIFO));
	cur->data = ch;
	cur->prev = top;
	top = cur;
	return top;
}

char pop(LIFO ** top)
{
	char temp;
	LIFO *cur = *top;
	if (*top == NULL)return  0;
	temp = (*top)->data;
	*top = cur->prev;
	free(cur);
	return temp;
}


char max(char a, char b)
{
	if (a > b)return a;
	else return b;
}

char min(char a, char b)
{
	if (a < b)return a;
	else return b;
}

char solve(char * str)
{
	LIFO *st = NULL;
	char num1, num2, oper;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'i' || str[i] == '\a' || isdigit(str[i])) st = push(st, str[i]);
		if (str[i] == ')')
		{
			num1 = pop(&st);
			num2 = pop(&st);
			oper = pop(&st);
			if (oper == 'a')
				st = push(st, max(num1, num2));
			else st = push(st, min(num1, num2));
		}
	}
	return pop(&st);
}


int main()
{
	char str[100];
	cin >> str;
	cout << solve(str);


	return 0;
}



		else if (str[i] == ')')
		{
			if (st.top != 0)pop(&st);
			else flag = false;
		}


		else if (str[i] == '}')
		{
			if (st.top != 0)pop(&st);
			else flag = false;
		}



			i++;
		}
		if (st.top != 0)flag = false;
		return flag;



	}


int main()
{
	char str[100], *s, oper[19];
	cout << "Input skobki:  ";
	cin >> str;
	cout << boolalpha << check(str)<<"\n";
		   

	return 0;
}
