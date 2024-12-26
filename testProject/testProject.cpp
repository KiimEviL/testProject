#include <iostream>
using namespace std;

class Player {
private:
	string pName;
	Player* pNext;
public:
	Player(string name = "") :pName(name), pNext(0){}

	Player* getNext() {
		return pNext;
	}
	string getName() {
		return pName;
	}
	void stNext(Player* next) {
		pNext = next;
	}
};

class Party {
private:
	Player* lHead;
public:
	Party() :lHead(0) {}

	void addPlayer(string name) {
		Player* pNew = new Player(name);
		if (lHead == 0) {
			lHead = pNew;
		}
		else {
			while (lHead->getNext()) {
				lHead = lHead->getNext();
			}
			lHead->stNext(pNew);
		}
		//else {
		//	Player* pTemp = lHead;
		//	while (pTemp->getNext()) {
		//		pTemp = pTemp->getNext();
		//	}
		//	pTemp->setNext(pNew);

		//}


	}

	void showAll() {
		if (lHead == 0) {
			cout << "Empty" << endl;
		}
		else
			while (lHead) {
				cout << lHead->getName() << endl;
				lHead = lHead->getNext();
			}
	}
};

int main() {
	Party l;
	l.addPlayer("aaa");
	l.addPlayer("bbb");
	l.addPlayer("sss");
	l.addPlayer("ddd");
	l.addPlayer("eee");
	l.addPlayer("www");
	l.showAll();

	return 0;
}