//#include<iostream>
//
//using namespace std;
//
//class Node {
//public:
//	int data;
//	Node* next;
//	Node() {
//		this->data = 0;
//		this->next = NULL;
//	}
//	Node(const int data) {
//		this->data = data;
//		this->next = NULL;
//	}
//
//};
//void inesrtAtTail(const int data, Node*& head) {
//	if (head == NULL) {
//		head = new Node(data);
//		return;
//	}
//	Node* tail = head;
//	while (tail->next != NULL) {
//		tail = tail->next;
//	}
//	Node* newNode = new Node(data);
//	tail->next = newNode;
//	tail = newNode;
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
//int getLength(Node* head) {
//	int count = 0;
//	Node* temp = head;
//	while (temp != NULL) {
//		temp = temp->next;
//		count++;
//	}
//	return count;
//}
//
//Node* kReverse(Node* head, int k) {
//	if (head == NULL)
//		return NULL;
//	if (getLength(head) < k) {
//		return head;
//	}
//	int count = 0;
//	Node* current = head;
//	Node* previous = NULL;
//	Node* next = NULL;
//	while (current != NULL && count < k) {
//		next = current->next;
//		current->next = previous;
//		previous = current;
//		current = next;
//		count++;
//	}
//	if (next != NULL) {
//		head->next = kReverse(next, k);
//	}
//
//	return previous;
//
//
//}
//
//int main() {
//	Node* head = NULL;
//	inesrtAtTail(1, head);
//	inesrtAtTail(2, head);
//	inesrtAtTail(3, head);
//	//inesrtAtTail(4, head);
//	print(head);
//
//
//
//
//	return 0;
//}
