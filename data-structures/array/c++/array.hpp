#ifndef ARRAY_H
#define ARRAY_H

template <class T> class Array {
  private:
    T *data;
    int items;
    int length;
    void resize();

  public:
    Array();
    ~Array();
    int size() const;
    int capacity() const;
    void push(const T &item);
    T &operator[](const int &index);
};

template <class T> Array<T>::Array() {
    data = new T[10];
    length = 10;
    items = 0;
}

template <class T> Array<T>::~Array() { delete[] data; }

template <class T> void Array<T>::resize() {
    T *newData = new T[length * 2];
    for (int i = 0; i < length; i++) {
        newData[i] = data[i];
    }
    delete[] data;
    data = newData;
    length = length * 2;
}

template <class T> int Array<T>::size() const { return items; }

template <class T> int Array<T>::capacity() const { return length; }

template <class T> void Array<T>::push(const T &item) {
    if (items == length) {
        resize();
    }
    data[items++] = item;
}

template <class T> T &Array<T>::operator[](const int &index) {
    if (index < 0 || index >= items) {
        return;
    }
    return data[index];
}

#endif
