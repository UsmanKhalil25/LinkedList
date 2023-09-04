////#include<iostream>
////
////using namespace std;
////
////class Node {
////public:
////	int data;
////	Node* next;
////	Node() {
////		this->data = 0;
////		this->next = NULL;
////	}
////	Node(const int data) {
////		this->data = data;
////		this->next = NULL;
////	}
////
////};
////
////
////void insertAtHead(const int data, Node*& head) {
////	if (head == NULL) {
////		head = new Node(data);
////		return;
////	}
////
////	Node* newNode = new Node(data);
////	newNode->next = head;
////	head = newNode;
////}
////
////
//////void insertAtTail(const int data, Node*& tail) {
//////	Node* newNode = new Node(data);
//////	tail->next = newNode;
//////	tail = newNode;
//////}
////void insertAtTail(const int data, Node*& head) {
////
////	if (head == NULL) {
////		head = new Node(data);
////		return;
////	}
////	Node* tail = head;
////	while (tail->next != NULL) {
////		tail = tail->next;
////	}
////	Node* newNode = new Node(data);
////	tail->next = newNode;
////
////}
////
////void print(Node*&head) {
////	Node* temp = head;
////	while (temp != NULL) {
////		cout << temp->data << " ";
////		temp = temp->next;
////	}
////	cout << endl;
////
////}
////
////void insertAtPosition(const int data, const int position, Node*& head) {
////	if (head == NULL) {
////		head = new Node(data);
////		return;
////	}
////	if (position == 1) {
////		insertAtHead(data, head);
////		return;
////	}
////	int count = 1;
////	Node* temp = head;
////	while (temp != NULL && count < position - 1) {
////		temp = temp->next;
////		count++;
////	}
////	if (temp == NULL) {
////		return;
////	}
////	if (temp->next == NULL) {
////		insertAtTail(data, head);
////		return;
////	}
////	Node* newNode = new Node(data);
////	newNode->next = temp->next;
////	temp->next = newNode;
////}
////
////void deletionAtPosition(int position, Node*& head) {
////
////	if (head == NULL) {
////		return;
////	}
////	// if 1
////	if (position == 1) {
////		Node* temp = head;
////		head = head->next;
////		temp->next = NULL;
////		delete temp;
////		return;
////	}
////
////	// if middle 
////	int count = 1;
////	Node* current = head;
////	Node* previous = NULL;
////	while (current != NULL && count < position) {
////		previous = current;
////		current = current->next;
////		count++;
////	}
////	if (current == NULL) {
////		return;
////	}
////	previous->next = current->next;
////	current->next = NULL;
////	delete current;
////
////
////}
////
////int main() {
////
////	Node* head = new Node(10);
////	Node* tail = head;
////	insertAtHead(11,head);
////	insertAtHead(12, head);
////	insertAtHead(13, head);
////	insertAtHead(14, head);
////	print(head);
////	insertAtTail(9, head);
////	insertAtTail(8, head);
////	insertAtTail(7, head);
////	insertAtPosition(90, 1, head);
////	print(head);
////	insertAtPosition(100, 5, head);
////	print(head);
////	deletionAtPosition(5, head);
////	print(head);
////	deletionAtPosition(9, head);
////	print(head);
////	deletionAtPosition(1, head);
////	print(head);
////	cout << "Tail: " << tail->data << endl;
////	cout << "Head: " << head->data << endl;
////
////	return 0;
////}