/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 02:44:45 by mjung             #+#    #+#             */
/*   Updated: 2021/12/26 02:45:09 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>

template<typename T>
class Array
{
public:
	// 빈 배열
	Array() {buf_ = new T;};

	//기본적으로 초기화되는 n 요소의 배열을 만듭니다. (팁: int * a = new int();를 컴파일한 다음 *a를 표시합니다.)
	Array(unsigned int n) : buf_(new T[n]), size_(n) {};
	~Array() { delete [] buf_; }

	// 복사 및 할당 연산자에 의한 구성. 두 경우 모두 복사/할당 후 두 어레이 중 하나를 수정해도 다른 어레이의 아무 것도 영향을 받지 않습니다.
	Array(Array &target){
		delete [] buf_;
		buf_ = new T[target.size_];
		for (int i=0; i<target.size_; i++)
		{
			buf_[i] = target.buf_[i];
		}
	}

	Array &operator=(const Array &target){
		delete [] buf_;
		buf_ = new T[target.size_];
		for (int i=0; i<target.size_; i++)
		{
			buf_[i] = target.buf_[i];
		}
		return (buf_);
	};

	T operator[](int _idx) const
	{
		if (_idx >= size_)
			throw ("size over..");
		return (buf_[_idx]);
	}

	unsigned int size(void) const {
		return (size_);
	};

	T *buf_;

private:
	unsigned int size_;


};

#endif
