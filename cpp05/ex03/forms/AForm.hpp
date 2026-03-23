/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-27 13:01:05 by dtimofee          #+#    #+#             */
/*   Updated: 2026-01-27 13:01:05 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Bureaucrat;

class AForm
{
	private:
	const std::string _name;
	bool _signedStatus;
	const int _signGrade;
	const int _executeGrade;

	protected:
	virtual void make_action() const = 0;

	public:
	AForm();
	AForm(const std::string &name, int signGrade, int executeGrade);
	AForm(const AForm &other);
	AForm &operator=(const AForm &other);
	virtual ~AForm();

	const std::string &getName() const;
	bool getSignStatus() const;
	int getSignGrade() const;
	int getExecuteGrade() const;

	int beSigned(const Bureaucrat &obj);
	void execute(Bureaucrat const &executor) const;

	class GradeTooHighException: public std::exception {
		public:
		const char *what() const throw();
	};
	class GradeTooLowException: public std::exception {
		public:
		const char *what() const throw();
	};
	class FormNotSignedException: public std::exception {
		public:
		const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, const AForm &obj);

