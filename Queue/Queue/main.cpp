#pragma once
#include"Queue.h"
#include <iostream>
using namespace std;
void YnN(char a) {
	if (a == 'Y' || a == 'y') {
		return;
	}
	else if (a == 'N' || a == 'y') {
		cout << "N을 입력하여 다시 출력합니다." << endl;
		cout << "Queue 구현 해보기 Y/N" << endl;
		
	}
}
int main() {

	cout << "Queue 구현 해보기 Y/N" << endl;

	Que q;

	q.push(1);
	q.push(2);
	q.push(3);
	cout << " 1 2 3추가 후 " << endl;
	q.show();
	q.pop();
	cout << " Front 삭제 후 " << endl;
	q.show();
	q.push(4);
	q.push(5);
	cout << " 4 5 추가 후" << endl;
	q.show();
	cout << " 현재 Queue 사이즈 : " << q.size() <<endl;
	q.swap(0, 1);
	cout << " Queue 0 1 배열 스왑 후 " << endl;
	q.show();
	cout << "Queue의 공간 비었으면 1 아니면 0 "<< q.empty() << endl;
	cout << "Queue 앞의 원소 " << q.front() << endl;
	cout << "Queue 뒤의 원소 " << q.back() << endl;
}