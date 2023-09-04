//#include<iostream>
//
//using namespace std;
//
//template<typename T>
//class Node {
//public:
//	T data;
//	Node<T>* nextNode;
//	Node(T data) {
//		this->data = data;
//		this->nextNode = nullptr;
//	}
//
//
//};
//
//template<typename T>
//void insertAtTail(Node<T>* &head,Node<T>* &tail, const T data) {
//	if (tail == nullptr) {
//		Node<T>* temp = new Node<T>(data);
//		tail = temp;
//		head = temp;
//	}
//	else {
//		Node<T>* temp = new Node<T>(data);
//		tail->nextNode = temp;
//		temp->nextNode = nullptr;
//		tail = temp;
//	}
//}
//
//
//template<typename T>
//void print(Node<T>*& head) {
//	Node<T>* temp = head;
//	while (temp != nullptr) {
//		cout << temp->data << " ";
//		temp = temp->nextNode;
//
//	}
//	cout << endl;
//}
//template<typename T>
//int getLength(Node<T>* head) {
//	int count = 0;
//	Node<T>* temp = head;
//	while (temp != nullptr) {
//		count++;
//		temp = temp->nextNode;
//	}
//	return count;
//}
//
//
//
//template<typename T>
//Node<T>* middleNode(Node<T>* head) {
//	int length = getLength(head);
//	length = length / 2;
//	Node<T>* temp = head;
//	int count = 0;
//	while (count<length) {
//		temp = temp->nextNode;	
//		count++;
//	}
//	return temp;
//
//
//}
//
//int main() {
//
//	Node<int>* head = nullptr;
//	Node<int>* tail = nullptr;
//	for (int i = 0; i < 5; i++)
//		insertAtTail(head, tail, i+1);
//	print(head);
//
//	head = middleNode(head);
//	print(head);
//
//	return 0;
//}