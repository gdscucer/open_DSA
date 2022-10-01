#include <iostream>

// #define MAX_SIZE_STACK 10

using namespace std;

bool isStackFull(int marker, int size)
{
	if (marker == size)
		return true;
	return false;
}

bool isStackEmpty(int marker)
{
	if (marker == -1)
		return true;
	return false;
}

bool stackPush(char c, char *stack, int &marker, int size)
{
	if (isStackFull(marker, size))
	{
		cout << "Error! The stack is full." << endl;
		return false;
	}
	else
	{
		*(stack + ++marker) = c;
		return true;
	}
}

char stackPop(char *stack, int &marker)
{
	char c;
	if (isStackEmpty(marker))
	{
		cout << "Error! The stack is empty." << endl;
		return false;
	}
	else
	{
		c = *(stack + --marker);
		return c;
	}
}

char stackPeak(char *stack, int marker)
{
	char c;
	if (isStackEmpty(marker))
	{
		cout << "Error! The stack is empty." << endl;
		return false;
	}
	else
	{
		c = *(stack + marker);
		return c;
	}
}

char *intializeStack(int size)
{
	char *stack = new char[size];
	return stack;
}

bool isOpenBracket(char b)
{
	if (b == '[' || b == '{' || b == '(')
		return true;
	return false;
}

bool isClosingBracket(char b)
{
	if (b == ']' || b == '}' || b == ')')
		return true;
	return false;
}

int bracketPrecedence(char b)
{
	if (b == '[' || b == ']')
		return 1;
	else if (b == '{' || b == '}')
		return 2;
	else if (b == '(' || b == ')')
		return 3;
	return 0;
}

bool areBracketsBalanced(string exp, char *stack, int marker)
{
	for (int i = 0; i < exp.length(); i++)
	{
		if (exp[i] == '[' || exp[i] == ']' || exp[i] == '{' || exp[i] == '}' || exp[i] == '(' || exp[i] == ')')
			if (isOpenBracket(exp[i]))
				if (isStackEmpty(marker))
					// If the stack is empty
					// just push the current bracket
					stackPush(exp[i], stack, marker, exp.length());
				else if (bracketPrecedence(exp[i]) >= bracketPrecedence(stackPeak(stack, marker)))
					stackPush(exp[i], stack, marker, exp.length());
				else
					return false;
			else if (isClosingBracket(exp[i]))
				if (isStackEmpty(marker))
					return false;
				else if (bracketPrecedence(stackPeak(stack, marker)) == bracketPrecedence(exp[i]))
					stackPop(stack, marker);
				else
					return false;
			else
				continue;
	}
	if (isStackEmpty(marker))
		// If stack is empty return true
		return true;
	return false;
}

int main()
{
	string exp;
	cout << "Enter the brackets expression: ";
	cin >> exp;
	// string exp = "[{()}]";

	int marker = -1;
	char *stack = intializeStack(exp.length());

	if (areBracketsBalanced(exp, stack, marker))
		cout << "Balanced";
	else
		cout << "Not Balanced";

	return 0;
}
