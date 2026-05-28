/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 18:45:48 by gafreire          #+#    #+#             */
/*   Updated: 2026/05/28 19:09:53 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array(void) : _data(NULL), _size(0)
{
    
}

template <typename T>
Array<T>::Array(unsigned int n) : _data(new T[n]()), _size(n)
{
    
}

template <typename T>
Array<T>::Array(const Array &cpy) : _data(NULL), _size(0)
{
	if (cpy._size > 0)
	{
		_data = new T[cpy._size]();
		_size = cpy._size;
		for (unsigned int i = 0; i < _size; i++)
			_data[i] = cpy._data[i];
	}
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &cpy)
{
	if (this != &cpy)
	{
		delete[] _data;
		_data = NULL;
		_size = 0;
		if (cpy._size > 0)
		{
			_data = new T[cpy._size]();
			_size = cpy._size;
			for (unsigned int i = 0; i < _size; i++)
				_data[i] = cpy._data[i];
		}
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete[] _data;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw std::exception();
	return (_data[index]);
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw std::exception();
	return (_data[index]);
}

template <typename T>
unsigned int Array<T>::size(void) const
{
	return (_size);
}