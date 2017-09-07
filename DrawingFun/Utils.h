#include "Stdafx.h"
#include <fstream>

void postToModelSpace(AcDbEntity* pEnt);
void setFormDisplayAtCenter(System::Windows::Forms::Form^ form);
void logToFile(char *str);
bool validateDouble(System::String^ string);
bool validateDouble(System::Windows::Forms::TextBox^ textBox);
std::string format(double d);
//std::string format(double d, std::streamsize precision);
System::String^ format(double d, short precision);
