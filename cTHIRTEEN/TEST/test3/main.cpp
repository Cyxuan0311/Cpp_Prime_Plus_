#include <cstring>
#include <iostream>

#include "queueTp.h"
#include "worker.h"

int main() {
  using std::cin;
  using std::cout;
  using std::endl;
  using std::strchr;

  QueueTp<Worker> q(3);

  int count = 0;
  Worker* pWorker = new Worker[3];
  pWorker[0] = Worker("Jack", 000001);
  pWorker[1] = Worker("Toou", 000002);
  pWorker[2] = Worker("Boub", 000003);

  while (q.queuecount() < 3) {
    pWorker[count].Show();
    q.push(pWorker[count++]);
  }
  if (q.queuecount() == 3)
    std::cout << "The Queue is full, the elements are: \n";

  while (q.queuecount() > 0) {
    pWorker[--count].Show();
    q.pop(pWorker[count]);
  }
  if (q.queuecount() == 0) std::cout << "The Queue is empty now. \n";
  delete[] pWorker;

  return 0;
}