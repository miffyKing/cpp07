#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename F>
void iter(T *arr, int len, void (*func)(F &))
{
  if (len == 0)
    return;
  if (arr == nullptr)
    return;

  try
  {
    for (int i = 0; i < len; i++)
    {
      func(arr[i]);
    }
  }
  catch (std::exception &e)
  {
    std::cout << "ERROR HAPPEND\n";
  }
}

#endif