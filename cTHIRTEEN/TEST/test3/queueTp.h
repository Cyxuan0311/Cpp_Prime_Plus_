#ifndef QUEUETP_H_
#define QUEUETP_H_

template <typename T>
class QueueTp {
 private:
  enum { Q_SIZE = 10 };
  struct Node {
    T item;
    Node* next_ptr;
  };
  Node* front;
  Node* rear;
  int items;
  const int qsize;

 public:
  QueueTp(int qs = Q_SIZE);
  ~QueueTp();
  bool isempty() const { return items == 0; }
  bool isfull() const { return items == qsize; }
  int queuecount() const { return items; }
  bool push(const T& item);
  bool pop(T& item);
};

template <typename T>
QueueTp<T>::QueueTp(int qs) : qsize(qs) {
  front = rear = nullptr;
  items = 0;
}

template <typename T>
QueueTp<T>::~QueueTp() {
  Node* temp;
  while (front != nullptr) {
    temp = front;
    front = front->next_ptr;
    delete temp;
  }
}

template <typename T>
bool QueueTp<T>::push(const T& item) {
  if (isfull()) return false;
  Node* add = new Node;
  if (front == nullptr)  // if queue is empty
  {
    add->item = item;
    add->next_ptr = nullptr;
    front = rear = add;
  } else {
    add->item = item;
    add->next_ptr = nullptr;
    rear->next_ptr = add;
    rear = add;
  }
  items++;

  return true;
}

template <typename T>
bool QueueTp<T>::pop(T& item) {
  if (isempty()) return false;

  item = front->item;
  Node* temp;
  temp = front;
  front = front->next_ptr;
  delete temp;
  items--;

  return true;
}

#endif  // QUEUETP_H_