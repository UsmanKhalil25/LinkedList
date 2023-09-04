//#include<iostream>
//
//using namespace std;
//
//class Node {
//public:
//	int data;
//	Node* next;
//	Node(const int data) {
//		this->data = data;
//		this->next = nullptr;
//	}
//	~Node() {
//		delete this->next;
//	}
//};
//
//void insertWithValue(Node*& head, const int element, const int data) {
//	if (head == nullptr) {
//		Node* temp = new Node(data);
//		temp->next = temp;
//		head = temp;
//	}
//	else {
//
//		Node* temp = head;
//		while (temp->data != element) {
//			temp = temp->next;
//		}
//		Node* nodeToInsert = new Node(data);
//		nodeToInsert->next = temp->next;
//		temp->next = nodeToInsert;
//	}
//
//}
//
//void print(Node*& head) {
//	if (head == nullptr) {
//		cout << "List is empty\n";
//
//	}
//	else {
//		Node* temp = head;
//		do {
//			cout << temp->data << " ";
//			temp = temp->next;
//		} while (temp != head);
//	}
//	cout << endl;
//}
//
//bool isCircular(Node*& head) {
//	if (head == nullptr) {
//		return true;
//	}
//	if (head->next == head) {
//		return true;
//	}
//
//	Node* temp = head->next;
//	while (temp != nullptr && temp != head) {
//		temp = temp->next;
//		
//	}
//	if (temp == nullptr)
//		return false;
//	if (temp == head) 
//		return true;
//}
//
//int main() {
//
//	Node* head = nullptr;
//	Node* tail = nullptr;
//	for (int i = 0; i < 5; i++) {
//		insertWithValue(head, i, i + 1);
//	}
//	print(head);
//	if (isCircular(head)) {
//		cout << "Linked list is ciruclar" << endl;
//	}
//	else if (!isCircular(head)) {
//		cout << "Linked list is not circlar" << endl;
//	}
//	
//}