#pragma once
#include <iostream>
using namespace std;

struct Node
{
	int pData;
	Node* pNext;
};

class List
{
private:
	Node* head; // ����� �� ó��
	Node* pNode, * temp;
public:
	List() :head(nullptr) {}
	~List() {}
	void BeginPush(int pData);
	void BeginPop();
	void EndPush(int pData);
	void EndPop();
	void cntNode(int pData, int cnt);
	void cntShow(int cnt);
	void ShowList();
};