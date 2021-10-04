#include "Queue.h"


void Que::push(int Data) { // 큐 마지막에 자료 추가
	
	if (head== nullptr)
	{
		head = new Node;
		tail = head;
		tail->pData = Data;
		tail->pNext = nullptr;
	}
	else {
		while (tail->pNext != nullptr)
		{
			tail = tail->pNext;
		}
		temp = new Node;
		temp->pData = Data;
		temp->pNext = nullptr;
		tail->pNext = temp;
	}
}
void Que::pop() { // 큐 첫번째 자료 삭제
	head = head->pNext;
}
int Que::front() { // 맨앞의 자료 반환 , 삭제 x
	if (head == nullptr) {
		cout << " 자료가 없습니다. " << endl;
		return -1;
	}
	else {
		return head->pData;
	}
}
int Que::back() { // 맨 뒤의 자료 반환 , 삭제 x
	temp = new Node;
	temp = head;
	if (temp == nullptr) {
		cout << " 자료가 없습니다. " << endl;
		return - 1;
	}
	else {
		while (temp->pNext != nullptr)
		{
			temp = temp->pNext;
		}
		return temp->pData;
	}
}
int Que::size() {
	int cnt = 0;
	temp = new Node;
	temp = head;
	while (temp->pNext != nullptr)
	{
		cnt++;
		temp = temp->pNext;
	}
	return cnt+1;
}
bool Que::empty() { // 큐가 비어있으면 true , 그렇지 않으면 false
	int cnt = 0;
	temp = new Node;
	temp = head;
	while (temp->pNext != nullptr) {
		cnt++;
		temp = temp->pNext;
	}
	if (cnt < 0)
		return true;
	else
		return false;
}
void Que::show() {
	Node* node = new Node;
	node = head;
		while(node != nullptr) {
			std::cout << node->pData << " ";
			node = node->pNext;
	}
		std::cout << endl;
}
void Que::swap(int swap1, int swap2) { 

	Node* swap01 = new Node;
	swap01 = head;
	for (int i = 0; i < swap1; i++) {
		swap01 = swap01->pNext;
	}

	Node* swap02 = new Node;
	swap02 = head;
	for (int i = 0; i < swap2; i++) {
		swap02 = swap02->pNext;
	}
	temp = swap01->pNext;
	swap01 = swap02->pNext;
	swap02 = temp->pNext;
}