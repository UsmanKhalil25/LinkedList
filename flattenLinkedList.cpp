//#include<iostream>
//
//using namespace std;
//
//class Node {
//public:
//	int data;
//	Node* next;
//	Node* child;
//	
//	Node(const int data) {
//		this->data = data;
//		this->next = NULL;
//		this->child = NULL;
//	}
//};
//
//Node* merger(Node* down, Node* right) {
//	if (down == NULL)
//		return right;
//	if (right == NULL)
//		return down;
//	Node* ans = new Node(-1);
//	Node* temp = ans;
//	while (down != NULL && right != NULL) {
//		if (down->data < right->data) {
//			temp->child = down;
//			down = down->child;
//			temp = temp->child;
//		}
//		else {
//			temp->child = right;
//			right = right->child;
//			temp = temp->child;
//
//		}
//	}
//	while (down != NULL) {
//		temp->child = down;
//		down = down->child;
//		temp = temp->child;
//	}
//	while (right != NULL) {
//		temp->child = right;
//		right = right->child;
//		temp = temp->child;
//	}
//
//	ans = ans->child;
//	return ans;
//
//}
//
//Node* flattenLinkedList(Node* head){
//	if (head == NULL || head->next == NULL)
//		return head;
//	Node* down = head;
//	Node* right = flattenLinkedList(head->next);
//	down->next = NULL;
//	Node* result = merger(down, right);
//	return result;
//
//	
//}
//
//int main() {
//
//
//	return 0;
//}