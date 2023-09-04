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
//		this->next = NULL;
//	}
//};
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
//
//void print(Node*&head) {
//	if (head == NULL) {
//		cout << "Linked list is empty";
//		return;
//	}
//	Node* temp = head;
//	while (temp != NULL) {
//		cout << temp->data << " ";
//		temp = temp->next;
//	}
//	cout << endl;
//
//
//
//
//}
//
//Node* findMid(Node* head) {
//	Node* slow = head;
//	Node* fast = head->next;
//	while (fast != NULL && fast->next != NULL) {
//		slow = slow->next;
//		fast = fast->next->next;
//	}
//	return slow;
//}
//
//Node* merger(Node* left, Node* right) {
//
//	if (left == NULL)
//		return right;
//	if (right == NULL)
//		return left;
//	Node* ans = new Node(-1);
//	Node* temp = ans;
//
//	while (left != NULL && right != NULL) {
//		if (left->data < right->data) {
//			temp->next = left;
//			temp = left;
//			left = left->next;
//
//		}
//		else {
//			temp->next = right;
//			temp = right;
//			right = right->next;
//		}
//	}
//	while (left != NULL) {
//		temp->next = left;
//		temp = left;
//		left = left->next;
//	}
//	while (right != NULL) {
//		temp->next = right;
//		temp = right;
//		right = right->next;
//	}
//
//
//	ans = ans->next;
//	return ans;
//
//}
//
//Node* mergeSort(Node* head) {
//	if (head == NULL || head->next == NULL)
//		return head;
//
//	//finding mid 
//	Node* mid = findMid(head);
//
//	Node* left = head;
//	Node* right = mid->next;
//	mid -> next = NULL;
//
//	//dividing into left and right part
//	left = mergeSort(left);
//	right = mergeSort(right);
//
//
//	//mergin left and right
//
//	Node* result = merger(left, right);
//
//	return result;
//	
//
//
//}
//
//int main() {
//
//	Node* head = NULL;
//	Node* tail = NULL;
//	insertAtTail(head, tail, 5);
//	insertAtTail(head, tail, 1);
//	insertAtTail(head, tail, 5);
//	insertAtTail(head, tail, 6);
//	insertAtTail(head, tail, 8);
//	insertAtTail(head, tail, 3);
//	insertAtTail(head, tail, 2);
//	insertAtTail(head, tail, 0);
//
//	cout << "Before sorting: ";
//	print(head);
//
//	cout << "After sorting: ";
//	head = mergeSort(head);
//	print(head);
//
//	return 0;
//}