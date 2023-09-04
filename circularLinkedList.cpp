//#include<iostream>
//#include<map>
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
//
//void insertWithData(const int element, const int data, Node*& head) {
//	if (head == NULL) {
//		head = new Node(data);
//		head->next = head;
//		return;
//	}
//
//	Node* temp = head;
//	while (temp->data != element) {
//		temp = temp->next;
//	}
//
//	Node* newNode = new Node(data);
//	newNode->next = temp->next;
//	temp->next = newNode;
//}
//
//void deleteWithData(const int data, Node*& head) {
//	if (head == NULL) {
//		return;
//
//	}
//	Node* current = head->next;
//	Node* previous = head;
//	while (current->data != data) {
//		previous = current;
//		current = current->next;
//
//	}
//	if (current == head) {
//		head = current->next;
//	}
//	previous->next = current->next;
//	current->next = NULL;
//	delete current;
//
//}
//
//void print(Node*& head) {
//
//	Node* temp = head;
//	do {
//		cout << temp->data << " ";
//		temp = temp->next;
//	} while (temp != head);
//	cout << endl;
//
//}
////
////bool isCircular(Node* head) {
////	if (head == NULL) {
////		return false;
////	}
////	Node* temp = head->next;
////	while (temp != head && temp != NULL) {
////		temp = temp->next;
////	}
////	if (temp == NULL)
////		return false;
////	return true;
////}
//
////bool isCircular(Node* head) {
////	if (head == NULL)
////		return false;
////	map<Node*, int> mapping;
////	Node* temp = head;
////	while (temp != NULL) {
////		if (mapping[temp] == true) {
////			return true;
////		}
////		mapping[temp] = true;
////		temp = temp->next;
////
////	}
////	return false;
////}
////int main() {
////
////	Node* head = NULL;
////
////
////	insertWithData(-1, 10, head);
////	insertWithData(10, 9, head);
////	insertWithData(10, 8, head);
////	insertWithData(8, 11, head);
////	insertWithData(9, 20, head);
////	print(head);
////	cout << "Is circular: " << isCircular(head) << endl;
////
////	return 0;
////}