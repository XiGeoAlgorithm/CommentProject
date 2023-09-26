/**
 * @file	my_class.h
 * @brief	file_brief: my_class.h
 * @note	author��Զ�������һ��
 * @author	author
 */
#pragma once

/**
 * @brief ����
 * @author ����
 */
class Base {

};

/**
 * @brief ����0
 * @author ����
 */
class Derived : public Base {
private:
	friend class MyClass;
};

/**
 * @brief ����1
 * @author ����
 */
class MyClass : public Base {
public:
	/**
	 * @brief		this is add description
	 * @param[in]	x value_x description
	 * @param[in]	y value_y description
	 * @return		int
	 * @todo		sth. is todo
	 * @bug			a bug
     * @deprecated	�ڰ汾v1.2.3�󽫲���֧��
	 * @author		author
	 */
	int add(int x, int y) const;

	/**
	 * @brief subtract
	 * @todo
	 * @author sb.
	 */
	void subtract() const;

	int z_; ///< �����ĵ���ע����ʾ, �� `///<` ����ʾ

	/**
	 * @brief �����Ķ���ע����ʾ
	 *		sum_ description is tool long,
	 *			one line is not enough
	 *
	 *			sum_ description line_2,
	 *			sum_ description line_2.
	 * @note ��ʽ��ʾ \f$ sum = x + y \f$
	 * @code{.cpp}
	 * \f$ sum = x + y \f$
	 * @endcode
	 * @deprecated	�ڰ汾v1.2.3��ɾ��
	 */
	int sum_; 

private:
	int x_; ///< value x
	int y_; ///< value y
};

