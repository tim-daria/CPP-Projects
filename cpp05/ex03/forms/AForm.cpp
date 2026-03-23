/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-27 13:01:09 by dtimofee          #+#    #+#             */
/*   Updated: 2026-01-27 13:01:09 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "../Bureaucrat.hpp"

#include <iostream>

AForm::AForm(): _name("Default"), _signedStatus(false), _signGrade(150), _executeGrade(150) {}

AForm::AForm(const std::string &name, int signGrade, int executeGrade):
    _name(name), _signedStatus(false), _signGrade(signGrade), _executeGrade(executeGrade) {
    if (_signGrade > 150 || _executeGrade > 150) {
		throw GradeTooLowException(); }
	else if (_signGrade < 1 || _executeGrade < 1) {
		throw GradeTooHighException(); }
}

AForm::AForm(const AForm &other): _name(other._name), _signedStatus(false),
    _signGrade(other._signGrade), _executeGrade(other._executeGrade) {}

AForm &AForm::operator=(const AForm &other) {
  if (this != &other) {
	_signedStatus = other._signedStatus;
  }
  return *this;
}

AForm::~AForm() {}

const std::string &AForm::getName() const {
	return _name; }

bool AForm::getSignStatus() const {
		return _signedStatus; }

int AForm::getSignGrade() const {
	return _signGrade; }

int AForm::getExecuteGrade() const {
		return _executeGrade; }

int AForm::beSigned(const Bureaucrat &obj) {
	if (obj.getGrade() <= _signGrade) {
		_signedStatus = true;
		return (1); }
	else { throw Bureaucrat::GradeTooLowException(); }
}

void AForm::execute(Bureaucrat const &executor) const {
	if (!_signedStatus) {
		throw FormNotSignedException();
	}
	if (executor.getGrade() <= _executeGrade) {
		make_action();
	}
	else { throw Bureaucrat::GradeTooLowException(); }
}

const char *AForm::GradeTooHighException::what() const throw() {
    return "Form's grade is too high";
}

const char *AForm::GradeTooLowException::what() const throw() {
    return "Form's grade is too low";
}

const char *AForm::FormNotSignedException::what() const throw() {
    return "Form is not signed";
}

std::ostream &operator<<(std::ostream &out, const AForm &obj) {
	out << obj.getName() << ", status: form is signed " << obj.getSignStatus() << ", grade required to sign it "
	    << obj.getSignGrade() << ", grade required to execute it " << obj.getExecuteGrade() << std::endl;
	return out;
}
