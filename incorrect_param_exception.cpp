#include "incorrect_param_exception.h"

IncorrectParamException::IncorrectParamException(const char* new_message) : domain_error(new_message) {}
IncorrectParamException::IncorrectParamException() : domain_error("Ошибка в параметрах фигуры") {}

