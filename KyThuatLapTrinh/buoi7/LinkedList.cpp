#include "LinkedList.h"

template <typename T>
void LinkedList<T>::Show() {
	if (head == NULL) {
		cout << "No data available" << endl;
		return;

	}
	Node<T>* item = head;
	while (item != NULL) {
		//cout << item->data;
		item = item->next;
	}
}
