#pragma once
#include <stdexcept>


class IncorrectParamException : public std::domain_error
{
public:
	IncorrectParamException(const char* new_message);
	IncorrectParamException();
};

