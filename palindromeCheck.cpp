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
//		this->next = NULL;
//	}
//	~Node() {
//		delete this->next;
//	}
//
//};
//
//
//void insertAtTail(Node*& head, Node*& tail, const int data) {
//	if (tail == NULL) {
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
//
//bool checkPalindrome(Node*& head) {
//	int len = getLength(head);
//	auto* arr = new int[len];
//
//	Node* temp = head;
//	for (auto i = 0; i < len && temp != NULL; i++) {
//		arr[i] = temp->data;
//		temp = temp->next;
//	}
//
//	int s = 0;
//	int e = len - 1;
//	while (s < e) {
//		if (arr[s] != arr[e])
//			return false;
//		s++;
//		e--;
//	}
//	return true;
//
//}
//int main() {
//
//	Node* head = NULL;
//	Node* tail = NULL;
//
//	insertAtTail(head, tail, 1);
//	insertAtTail(head, tail, 2);
//	insertAtTail(head, tail, 3);
//	insertAtTail(head, tail, 2);
//	insertAtTail(head, tail, 1);
//
//	print(head);
//
//	if (checkPalindrome(head)) {
//		cout << "Linked List is Palindrome" << endl;
//	}
//	else {
//		cout << "Linked List is not Palindrome" << endl;
//	}
//
//
//
//
//
//	return 0;
//}