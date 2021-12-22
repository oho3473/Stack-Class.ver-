#pragma once
class Stack
{	
private:
	struct Element
	{
		int value;
		Element* next;
	};

	int mCount;
	Element* mTop;

public:
	Stack();
	~Stack();

	void Push(int value);
	bool Pop();
	void Print() const;

};


enum Command
{
	PUSH = 1,
	POP = 2,
	EXIT = 3
};



