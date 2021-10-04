#pragma once
#include <iostream>
using namespace std;
#define MAX_QUEUE_SIZE 10
struct Node {
	int pData;
	Node* pNext;
};
class Que
{
private:
	Node* head;
	Node* tail,* temp;
public:
	Que() { head = tail = temp = nullptr; }
	void push(int Data);
	void pop();
	int front();
	int back();
	int size();
	bool empty();
	void show();
	void swap(int swap1 , int swap2);
};