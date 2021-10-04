#include "SinglyLinkedList.h"

void List::BeginPush(int Data) { // 첫번째 list 추가

	Node* node = new Node;
	node->pData = Data;
	node->pNext = NULL;

	if (head == NULL)
	{
		head = node;
	}
	else
	{
		node->pNext = head;
		head = node;
	}
}
void List::BeginPop() {
	pNode = head; // 첫번째 원소를 받음

	head = pNode->pNext; // 첫번째 공간을 pNode = head이므로 2번째 공간으로 밀어버림 pNode->pNext의 값을 받으므로 2번째 위치를 받게됨

	delete pNode; // 첫번째 원소를 대입한 pNode를 삭제
}
void List::EndPush(int pData) {
	pNode = head;

	while (pNode->pNext != NULL) {
		pNode = pNode->pNext;
	}
	temp = new Node;
	temp->pData = pData;
	temp->pNext = NULL;
	pNode->pNext = temp;

}
void List::EndPop() {

	pNode = head;

	while (pNode->pNext != NULL) // 다음을 가르키는 Next가 NULL 즉 마지막 공간일경우까지 반복
	{
		pNode = pNode->pNext; // 계속 넘어가줌
	}
	pNode->pNext = nullptr;
	delete pNode;

}
void List::cntNode(int pData, int cnt) {
	pNode = head;

	for (int i = 0; i < cnt; i++) {
		if (pNode->pNext == NULL) {
			break;
			pNode = pNode->pNext;
		}
	}
	temp = new Node;
	temp->pData = pData;
	temp->pNext = pNode->pNext;
	pNode->pNext = temp;
}

void List::cntShow(int cnt) {
	pNode = head;

	for (int i = 0; i < cnt; i++)
	{
		pNode = pNode->pNext;
		if (pNode->pNext == NULL)
		{
			std::cout << "원소가 없습니다." << endl;
			break;
		}
	}
	std::cout << pNode->pData << endl;
}
void List::ShowList() {
	pNode = head;
	std::cout << "원소 : ";

	while (pNode != NULL)
	{
		std::cout << pNode->pData << " ";
		pNode = pNode->pNext; // 출력하고 다음것을 출력하기 위해 포인터를 이동시켜줌
	}
	std::cout << std::endl;
}