#pragma once

class AbstractClass
{
public:
	// ----------------------------------	.TXT document functions	----------------------------------

	// Creates a default text document with item names, and set amount to 0 (for filling in whats in stock).
	virtual void TextDocumentCreator(AbstractClass& Obj) = 0;

	// Reads the document and assign the class arrays with the values from the document.
	virtual void TextDocumentReader(AbstractClass& Obj) = 0;

	// Writes array values to the document(for updating).
	virtual void TextDocumentWriter(AbstractClass& Obj) = 0;

	// ----------------------------------	increase and decrease functions	----------------------------------

	virtual void Increaser(AbstractClass& Obj, int* Amount, size_t index) = 0;

	/*
	
	Needed functions for my program:

	Done	-	Creating a document that we can fill in the amount of items we have (TextDocumentCreator).
	Done	-	Reading from that document and then changing the values in the class arrays (TextDocumentReader).
	Done	-	Writing from arrays to document, this is to update the document whenever the user reduces or increases the amount (TextDocumentWriter).

	-		-	Method to reduce the amount by a user input value, then changing the coresponding array value and lastly update the array to .txt file.
				One method per array index OR array index as func parameter?
				SHOULD NOT BE ABLE TO GO BELOW 0
	
	-		-	Method to increase the amount by a user input value, then changing the coresponding array value and lastly update the array to .txt file.
				One method per array index OR array index as func parameter?
	
	-		-	Method for setting a desired amount.

	-		-	Method for setting threshold amount.

	-		-	Method for checking the current amount against desired amount - Will give the delta (used for ordering).
				Could check if the amount is == or more than desired, and create a new textfile with only the needed amount of
				items that is below desired amount.

	-		-	Implement a log method that shows time and date when someone reduced or increased the amount and what project it was tied do.
				#include <chrono>
				#include <ctime>
	
	-		-	
	-		-	
	*/


protected:


private:

};