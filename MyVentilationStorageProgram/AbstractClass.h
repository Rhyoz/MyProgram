#pragma once

class AbstractClass
{
public:
	// Creates a text document with item names, and set amount to 0 (for filling in whats in stock).
	virtual void TextDocumentCreator(AbstractClass& Obj) = 0;

	// Reads the document and assign the class arrays with the values from the document.
	virtual void TextDocumentReader(AbstractClass& Obj) = 0;

protected:


private:

};