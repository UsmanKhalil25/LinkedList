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
//
//
//
//
//template<typename T>
//Node<T>* reverseLinkedList(Node<T>*& head) {
//	if (head == nullptr || head->nextNode == nullptr) {
//		return head;
//	}
//
//	Node<T>* previous = nullptr;
//	Node<T>* current = head;
//	Node<T>* next = nullptr;
//	while (current != nullptr) {
//		next = current->nextNode;
//		current->nextNode = previous;
//		previous = current;
//		current = next;
//		head = previous;
//	}
//	return head;
//}
//
//
//
//template<typename T>
//void reverser(Node<T>*& head, Node<T>*current, Node<T>* previous) {
//
//	//base case
//	if (current == nullptr) {
//		head = previous;
//		return;
//	}
//
//	reverser(head, current->nextNode, current);
//	current->nextNode = previous;
//
//
//
//
//}
//
//
//int main() {
//
//	Node<int>* head = nullptr;
//	Node<int>* tail = nullptr;
//	for (int i = 0; i < 10; i++)
//		insertAtTail(head, tail, i);
//	print(head);
//	
//	cout << "After reversing: ";
//	Node<int>* current = head;
//	Node<int>* previous = nullptr;
//	reverser(head, current, previous);
//	//head = reverseLinkedList(head);
//	print(head);
//
//	
//
//
//	return 0;
//}