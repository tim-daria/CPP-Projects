/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:01:05 by dtimofee          #+#    #+#             */
/*   Updated: 2026/01/30 15:26:29 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include <string>

class Bureaucrat;

class Form
{
	private:
	const std::string _name;
	bool _isSigned;
	const int _signGrade;
	const int _executeGrade;

	public:
	Form();
	Form(const std::string &name, int signGrade, int executeGrade);
	Form(const Form &other);
	Form &operator=(const Form &other);
	~Form();

	const std::string &getName() const;
	bool getSignStatus() const;
	int getSignGrade() const;
	int getExecuteGrade() const;

	void beSigned(const Bureaucrat &b);

	class GradeTooHighException: public std::exception {
		public:
		const char *what() const throw();
	};
	class GradeTooLowException: public std::exception {
		public:
		const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, const Form &obj);

#endif
