//#include<iostream>
//#include<map>
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
//////timeComplexity O(n^2)
////Node* removeDuplicates(Node*& head) {
////	if (head == nullptr)
////		return head;
////	Node* current = head;
////	while (current != nullptr) {
////		Node* next = current->next;
////		Node* beforeNext = current;
////		while (next != nullptr) {
////			if(current->data  == next->data){
////				beforeNext->next = next->next;
////				next->next = nullptr;
////				delete next;
////				next = beforeNext->next;
////			}
////			else {
////				beforeNext = next;
////				next = next->next;
////			}
////
////		}
////		current = current->next;
////	}
////
////	return head;
////}
//
////timecomplexity O(n)
//Node* removeDuplicates(Node*& head) {
//	if (head == nullptr)
//		return head;
//
//	map<int, bool> visited;
//	Node* temp = head;
//	Node* beforeTemp = nullptr;
//	while (temp != nullptr) {
//		if (visited[temp->data] == true && beforeTemp!=nullptr ) {
//			beforeTemp->next = temp->next;
//			temp->next = nullptr;
//			delete temp;
//			temp = beforeTemp->next;
//		}
//		else {
//			visited[temp->data] = true;
//			beforeTemp = temp;
//			temp = temp->next;
//		}
//	
//
//	}
//	return head;
//}
//
//
//int main() {
//
//	Node* head = nullptr;
//	Node* tail = nullptr;
//	insertAtTail(head, tail, 1);
//	insertAtTail(head, tail, 2);
//	insertAtTail(head, tail, 1);
//	insertAtTail(head, tail, 2);
//	insertAtTail(head, tail, 2);
//	insertAtTail(head, tail, 2);
//	insertAtTail(head, tail, 7);
//	insertAtTail(head, tail, 7);
//
//	print(head);
//
//	//head = removeDuplicates(head);
//	head = removeDuplicates(head);
//	print(head);
//
//
//	return 0;
//}