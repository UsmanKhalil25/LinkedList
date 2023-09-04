//#include<iostream>
//#include<map>
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
//
//void insertWithData(const int data, const int element, Node*& head) {
//	if (head == NULL) {
//		head = new Node(data);
//		head->next = head;
//		return;
//	}
//	Node* temp = head;
//	while (temp != NULL && temp->data != element) {
//		temp = temp->next;
//	}
//	if (temp == NULL) {
//		return;
//	}
//	
//	Node* newNode = new Node(data);
//	newNode->next = temp->next;
//	temp->next = newNode;
//}
//
//void print(Node* head) {
//	if (head == NULL)
//		return;
//	Node* temp = head;
//	do {
//		cout << temp->data << " ";
//		temp = temp->next;
//	} while (temp != head);
//	cout << endl;
//}
//
//Node* floyedDetection(Node* head) {
//	if (head == NULL || head->next == NULL)
//		return head;
//	Node* slow = head;
//	Node* fast = head;
//	while (fast != NULL && slow != NULL) {
//		fast = fast->next;
//		if (fast != NULL) {
//			fast = fast->next;
//		}
//		slow = slow->next;
//		if (slow == fast) {
//			return slow;
//		}
//	}
//	return NULL;
//
//}
//
//Node* findingStartofLoop(Node* head) {
//	if (head == NULL)
//		return NULL;
//	Node* intersectionPoint = floyedDetection(head);
//	if (intersectionPoint == NULL)
//		return NULL;
//	Node* temp = head;
//	while (temp != intersectionPoint) {
//		temp = temp->next;
//		intersectionPoint = intersectionPoint->next;
//	}
//	return temp;
//}
//
//bool removeLoop(Node* head) {
//	if (head == NULL) {
//		return false;
//	}
//	Node* startingPoint = findingStartofLoop(head);
//	if (startingPoint == NULL)
//		return false;
//	Node* temp = startingPoint;
//	while (temp->next != startingPoint) {
//		temp = temp->next;
//	}
//	temp->next = NULL;
//	return true;
//}
//
//bool removeCycles(Node* head) {
//	if (head == NULL) {
//		return false;
//	}
//	map<Node*, bool>visited;
//	Node* current = head;
//	Node* previous = NULL;
//	while (current != NULL) {
//		if (visited[current] == true)
//			break;
//		visited[current] = true;
//		previous = current;
//		current = current->next;
//	}
//
//	if (current == NULL)
//		return false;
//	if (previous != NULL) {
//		previous->next = NULL;
//		return true;
//	}
//	
//}
//int main() {
//
//	Node* head = NULL;
//
//	insertWithData(1, -1, head);
//	insertWithData(2, 1, head);
//	insertWithData(3, 2, head);
//	insertWithData(4, 3, head);
//	print(head);
//	if (removeCycles(head)) {
//		cout << "Loop removed successfully\n";
//	}
//	else {
//		cout << "Could not remove loop\n";
//	}
//
//
//
//	return 0;
//}