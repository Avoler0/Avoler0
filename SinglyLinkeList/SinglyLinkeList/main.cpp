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

	cout << "첫번째 원소 제거 후" << endl;
	myList.BeginPop();
	myList.ShowList();

	cout << "2번째 원소는 : " << " ";
	myList.cntShow(2);
	myList.EndPop();
	cout << " 마지막 원소 제거후 " << endl;
	myList.ShowList();
}