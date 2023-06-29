#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

#include "AbstractClass.h"

class SpiroBendClass : public AbstractClass
{
public:
	//	Default constructor
	SpiroBendClass() = default;

	// ----------------------------------	.TXT document functions	----------------------------------
	
	// Creates a text document with item names, and set amount to 0 (for filling in whats in stock).
	void TextDocumentCreator(AbstractClass& Obj) override;

	// Reads the document and assign the class arrays with the values from the document.
	void TextDocumentReader(AbstractClass& Obj) override;

	// Writing from arrays to document, this is to update the document whenever the user reduces or increases the amount(TextDocumentWriter).
	void TextDocumentWriter(AbstractClass& Obj) override;

	// ----------------------------------	increase and decrease functions	----------------------------------
	
	void Increaser(AbstractClass& Obj, int* Amount, size_t index);


	//	Array of dimention names:	--	fill inn names and array size as needed for the specific class
	std::string Name[3] = 
	{ 
		"O-100: " ,
		"O-125: " ,
		"O-160: "
	};
	size_t NameArraySize = sizeof(Name) / sizeof(Name[0]);

	//	Array of amount in stock:	--	(leave at 0)
	int Amount[3] = 
	{
		0,
		0,
		0 
	};

protected:
	

private:

};

