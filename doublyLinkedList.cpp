//
//#include<iostream>
//
//using namespace std;
//
//class Node {
//public:
//	int data;
//	Node* next;
//	Node* previous;
//	Node() {
//		this->data = 0;
//		this->next = NULL;
//		this->previous = NULL;
//
//	}
//	Node(const int data) {
//		this->data = data;
//		this->next = NULL;
//		this->previous = NULL;
//	}
//};
//
//void insertAtHead(const int data, Node*& head) {
//	
//	if (head == NULL) {
//		head = new Node(data);
//		return;
//	}
//	Node* newNode = new Node(data);
//	head->previous = newNode;
//	newNode->next = head;
//	head = newNode;
//
//
//}
//
//
//void insertAtTail(const int data, Node*& head) {
//	if (head == NULL) {
//		head = new Node(data);
//		return;
//	}
//	Node* tail = head;
//	while (tail->next != NULL) {
//		tail = tail->next;
//
//	}
//	Node* newNode = new Node(data);
//	newNode->previous = tail;
//	tail->next = newNode;
//	tail = newNode;
//}
//
//
//void insertAtPosition(const int data, const int position, Node*& head) {
//	if (head == NULL) {
//		head = new Node(data);
//		return;
//	}
//	if (position == 1) {
//		insertAtHead(data, head);
//		return;
//	}
//	int count = 1;
//	Node* temp = head;
//	while (temp != NULL && count < position - 1) {
//		temp = temp->next;
//		count++;
//	}
//	if (temp == NULL)
//		return;
//	if (temp->next == NULL) {
//		insertAtTail(data, head);
//		return;
//	}
//	Node* newNode = new Node(data);
//
//	newNode->previous = temp;
//	newNode->next = temp->next;
//	temp->next->previous = newNode;
//	temp->next = newNode;
//
//
//}
//
//void deleteAtPosition(const int position, Node*& head) {
//	if (head == NULL)
//		return;
//	if (position == 1) {
//		Node* temp = head;
//		head = head->next;
//		temp->next = NULL;
//		delete temp;
//		return;
//	}
//
//	int count = 1;
//	Node* temp = head;
//	while (temp != NULL && count < position) {
//		temp = temp->next;
//		count++;
//	}
//	// out of bound
//	if (temp == NULL) {
//		return;
//	}
//	//last node
//	if (temp->next == NULL) {
//		temp->previous->next = NULL;
//		temp->previous = NULL;
//		delete temp;
//		return;
//	}
//	// middle node
//	temp->previous->next = temp->next;
//	temp->next->previous = temp->previous;
//	temp->next = NULL;
//	temp->previous = NULL;
//	delete temp;
//
//
//}
//
//void print(Node*& head) {
//	Node* temp = head;
//	while (temp != NULL) {
//		cout << temp->data << " ";
//		temp = temp->next;
//	}
//	cout << endl;
//}
//
//int main() {
//
//	Node* head = NULL;
//	insertAtHead(1, head);
//	insertAtHead(2, head);
//	insertAtHead(3, head);
//	insertAtHead(4, head);
//	print(head);
//	insertAtTail(5, head);
//	insertAtTail(6, head);
//	insertAtTail(7, head);
//	insertAtTail(8, head);
//	insertAtTail(9, head);
//	print(head);
//	insertAtPosition(100, 5, head);
//	print(head);
//	insertAtPosition(101, 1, head);
//	print(head);
//	deleteAtPosition(2, head);
//	print(head);
//	deleteAtPosition(1, head);
//	print(head);
//
//	deleteAtPosition(9, head);
//	print(head);
//	deleteAtPosition(9, head);
//	print(head);
//
//
//	return 0;
//}