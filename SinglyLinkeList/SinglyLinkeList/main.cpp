#pragma once
#include"SinglyLinkedList.h"
#include <iostream>
using namespace std;

int main() {
	List myList;

	myList.BeginPush(0);
	myList.BeginPush(1);
	myList.BeginPush(2);
	myList.BeginPush(3);
	myList.BeginPush(4);
	myList.BeginPush(5);
	myList.cntNode(13, 0);
	myList.EndPush(11);

	myList.ShowList();

	cout << "ù��° ���� ���� ��" << endl;
	myList.BeginPop();
	myList.ShowList();

	cout << "2��° ���Ҵ� : " << " ";
	myList.cntShow(2);
	myList.EndPop();
	cout << " ������ ���� ������ " << endl;
	myList.ShowList();
}