//#include<iostream>
//
//using namespace std;
//
//class Node {
//public:
//	int data;
//	Node* previous;
//	Node* next;
//	Node(const int data) {
//		this->data = data;
//		this->next = nullptr;
//		this->previous = nullptr;
//	}
//	~Node() {
//		delete this->next;
//		delete this->previous;
//		this->next = nullptr;
//		this->previous = nullptr;
//
//	} 
//};
//void print(Node*& head) {
//	Node* temp = head;
//	while (temp != nullptr) {
//		cout << temp->data << " ";
//		temp = temp->next;
//	}
//	cout << endl;
//}
//
//
//void insertAtTail(Node*& head, Node*& tail, const int data) {
//	if (tail == nullptr) {
//		Node* temp = new Node(data);
//		head = temp;
//		tail = temp;
//	}
//	else {
//		Node* temp = new Node(data);
//		tail->next = temp;
//		temp->previous = tail;
//		temp->next = nullptr;
//		tail = temp;
//
//
//	}
//}
//
//Node* reverse(Node*& head) {
//	Node* previous = nullptr;
//	Node* current = head;
//	Node* next = nullptr;
//	while (current != nullptr) {
//		next = current->next;
//		current->next = previous;
//		current->previous = next;
//		previous = current;
//		current = next;
//
//
//
//	}
//	return previous;
//}
//
//
//
//
//int main() {
//
//	Node* head = nullptr;
//	Node* tail = nullptr;
//	for (int i = 0; i < 10; i++)
//		insertAtTail(head, tail, i + 1);
//
//	print(head);
//
//	head = reverse(head);
//	print(head);
//
//	return 0;
//}