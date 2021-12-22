#include<iostream>
#include"Stack.h"

void printInfo()
{
	std::cout << "----STACK----" << std::endl;
	std::cout << "[1] push" << std::endl;
	std::cout << "[2] pop" << std::endl;
	std::cout << "[3] exit" << std::endl;
	std::cout << "-------------" << std::endl;
}

void ProcessUserInput(Stack& stack)
{
	int command{};

	while (true)
	{
		stack.Print();

		std::cout << std::endl;
		std::cout << "> ";
		std::cin >> command;



		switch (command)
		{
			case PUSH:
			{
				int value;
				std::cout << "    > ";
				std::cin >> value;
				stack.Push(value);
				break;
			}
			case POP:
			{
				stack.Pop();
				break;
			}
			case EXIT:
			{
				return;
				break;
			}
			default:
				std::cout << "�߸��� ��ɾ� �Դϴ�." << std::endl;
				break;
		}
	}
}


int main()
{
	Stack myStack;

	printInfo();
	ProcessUserInput(myStack);


}