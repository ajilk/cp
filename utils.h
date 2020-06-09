#ifndef UTILS_H
#define UTILS_H

#define RESET "\033[0m"
#define RED "\033[31m"
#define DEBUG(x) cout << RED << "\n==> " << RESET << #x << ": " << x;

template <class T>
void print(T* arr, int size) {
  for (int i = 0; i < size; i++) cout << arr[i] << " ";
  cout << endl;
}

template <class T>
void print(vector<T>& a) {
  for (int i = 0; i < a.size(); i++) cout << a.at(i) << " ";
  cout << endl;
}

#endif
