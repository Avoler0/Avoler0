#pragma once
#include"Queue.h"
#include <iostream>
using namespace std;
void YnN(char a) {
	if (a == 'Y' || a == 'y') {
		return;
	}
	else if (a == 'N' || a == 'y') {
		cout << "N�� �Է��Ͽ� �ٽ� ����մϴ�." << endl;
		cout << "Queue ���� �غ��� Y/N" << endl;
		
	}
}
int main() {

	cout << "Queue ���� �غ��� Y/N" << endl;

	Que q;

	q.push(1);
	q.push(2);
	q.push(3);
	cout << " 1 2 3�߰� �� " << endl;
	q.show();
	q.pop();
	cout << " Front ���� �� " << endl;
	q.show();
	q.push(4);
	q.push(5);
	cout << " 4 5 �߰� ��" << endl;
	q.show();
	cout << " ���� Queue ������ : " << q.size() <<endl;
	q.swap(0, 1);
	cout << " Queue 0 1 �迭 ���� �� " << endl;
	q.show();
	cout << "Queue�� ���� ������� 1 �ƴϸ� 0 "<< q.empty() << endl;
	cout << "Queue ���� ���� " << q.front() << endl;
	cout << "Queue ���� ���� " << q.back() << endl;
}