/**
 * @file	my_class.h
 * @brief	file_brief: my_class.h
 * @note	author永远放在最后一项
 * @author	author
 */
#pragma once

/**
 * @brief 基类
 * @author 作者
 */
class Base {

};

/**
 * @brief 子类0
 * @author 作者
 */
class Derived : public Base {
private:
	friend class MyClass;
};

/**
 * @brief 子类1
 * @example	
 * 	int main {
 *	  printf("Hello\n");
 *	  return 0;
 *	}
 * @author 作者
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
	 * @deprecated	在版本v1.2.3后将不再支持
	 * @author		author
	 */
	int add(int x, int y) const;

	/**
	 * @brief subtract
	 * @todo
	 * @author sb.
	 */
	void subtract() const;

	int z_; ///< 变量的单行注释演示, 用 `///<` 来表示

	/**
	 * @brief 变量的多行注释演示
	 *		sum_ description is tool long,
	 *			one line is not enough
	 *
	 *			sum_ description line_2,
	 *			sum_ description line_2.
	 * @note 公式提示 \f$ sum = x + y \f$
	 * @code{.cpp}
	 * \f$ sum = x + y \f$
	 * @endcode
	 * @deprecated	在版本v1.2.3后将删除
	 */
	int sum_; 

private:
	int x_; ///< value x
	int y_; ///< value y
};

