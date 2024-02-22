#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include "Array.tpp"

template <typename T>
class Array
{
public:
  Array();
  Array(unsigned int n);
  Array(const Array &copy);

  ~Array();
  Array &operator=(const Array &assign);
  T &operator[](unsigned int i) const;

  size_t size() const;

private:
  T *_data;
  size_t _size;
};

#endif