#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>



class AbstractSpiroClass
{
public:
	//	Default constructor
	AbstractSpiroClass() = default;

	// This function creates a text document with all the names of the items, and set amount to 0 so that we can fill it inn later.
	void TextDocumentCreator(AbstractSpiroClass& Obj); // MAKE THIS VIRUTAL PURE FUNCTION LATER SO THAT ALL THE CHILDREN GET ITS OWN

	// This function reads the document and populate the class arrays with the values from the document
	void TextDocumentReader(AbstractSpiroClass& Obj); // MAKE THIS VIRUTAL PURE FUNCTION LATER SO THAT ALL THE CHILDREN GET ITS OWN
	

protected:
	//	Array of dimention names:		--		fill inn names and array size as needed for the specific class
	std::string Name[3] = { "O-100: " ,"O-125: " ,"O-160: " };

	//	Array of amount in stock:		--		leave at 0
	int Amount[3] = { 0, 0, 0 };

private:

};

