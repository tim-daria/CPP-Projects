/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:01:09 by dtimofee          #+#    #+#             */
/*   Updated: 2026/01/30 15:30:35 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

#include <iostream>

Form::Form() : _name("Default"), _isSigned("False"), _signGrade(150), _executeGrade(150) {}

Form::Form(const std::string &name, int signGrade, int executeGrade) :
    _name(name), _isSigned("False"), _signGrade(signGrade), _executeGrade(executeGrade) {
    if (_signGrade > 150 || _executeGrade > 150) {
		throw GradeTooLowException();}
	else if (_signGrade < 1 || _executeGrade < 1) {
		throw GradeTooHighException();}
}

Form::Form(const Form &other) : _name(other._name), _isSigned("False"),
    _signGrade(other._signGrade), _executeGrade(other._executeGrade) {}

Form& Form::operator=(const Form &other) {
  if (this != &other) {
	_isSigned = other._isSigned;
  }
  return *this;
}

Form::~Form() {}

const std::string &Form::getName() const {
	return _name; }

bool Form::getSignStatus() const {
		return _isSigned; }

int Form::getSignGrade() const {
	return _signGrade; }

int Form::getExecuteGrade() const {
		return _executeGrade; }

void Form::beSigned(const Bureaucrat &b) {
	if (b.getGrade() > _signGrade) {
		throw Form::GradeTooLowException();}
	_isSigned = "True";
}

const char *Form::GradeTooHighException::what() const throw() {
    return "Form grade is too high";
}

const char *Form::GradeTooLowException::what() const throw() {
    return "Form grade is too low";
}

std::ostream &operator<<(std::ostream &out, const Form &obj) {
	out << obj.getName() << ", status: form is signed " << obj.getSignStatus() << ", grade required to sign it "
	    << obj.getSignGrade() << ", grade required to execute it " << obj.getExecuteGrade() << std::endl;
	return out;
}
