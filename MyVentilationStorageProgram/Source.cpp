#pragma once
#include "Header.h"


int main()
{
	AbstractSpiroClass obj;	//creates a class object

	//obj.TextDocumentCreator(obj);	//	creates a default text document with names and 0 as amount

	obj.TextDocumentReader(obj);

	std::cout << obj.Name[0] << " " << obj.Amount[0] << std::endl;
	std::cout << obj.Name[1] << " " << obj.Amount[1] << std::endl;
	std::cout << obj.Name[2] << " " << obj.Amount[2] << std::endl;
	return 0;
}