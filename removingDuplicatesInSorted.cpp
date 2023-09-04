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
//
//};
//
//
//void insertAtTail(Node*& head, Node*& tail, const int data) {
//	if (tail == nullptr) {
//		Node* temp = new Node(data);
//		tail = temp;
//		head = temp;
//	}
//	else {
//		Node* temp = new Node(data);
//		tail->next = temp;
//		tail = temp;
//	}
//}
//
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
//Node* removeDuplicates(Node* &head) {
//	Node* current = head;
//	Node* next = nullptr;
//	while (current->next!=nullptr) {
//		next = current->next;
//		if (next != nullptr) {
//			if (current->data == next->data) {
//				current->next = next->next;
//				next->next = nullptr;
//				delete next;
//			}
//			else {
//				current = current->next;
//			}
//		}
//		
//	
//	}	
//	return head;
//
//}
//int main() {
//	Node* head = nullptr;
//	Node* tail = nullptr;
//
//	insertAtTail(head, tail, 1);
//	insertAtTail(head, tail, 2);
//	insertAtTail(head, tail, 2);
//	insertAtTail(head, tail, 3);
//	insertAtTail(head, tail, 4);
//	insertAtTail(head, tail, 6);
//
//	head = removeDuplicates(head);
//	print(head);
//
//
//
//	return 0;
//}


