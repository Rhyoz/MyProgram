#include "SpiroBendClass.h"

// ----------------------------------	.TXT document functions	----------------------------------

void SpiroBendClass::TextDocumentCreator(AbstractClass& Obj)
{
	std::ofstream OutputFile("SpiroBendClass.txt");
	if (OutputFile.is_open())
	{	
		for (size_t i = 0; i < NameArraySize; i++)
		{
			Amount[i] = 0;
			OutputFile << Name[i]  << Amount[i] << std::endl;
		}
		OutputFile.close();
	}
	else
	{
		/*
		Check 
		-	Lack of permission to write in the specified directory
		-	The file system could be full, so there's no space to create a new file.
		-	The file could be in use by another process, and that process has locked the file for exclusive access.
		-	The file path could be incorrect or invalid, such as a path to a directory that doesn't exist.
		-	The file system could be read-only, which would prevent any new files from being created
		*/	

		std::cerr << "File creation Error - Unable to create the file SpiroBendClass.txt" << std::endl;
	}
}

void SpiroBendClass::TextDocumentReader(AbstractClass& Obj)
{
	std::ifstream InputFile("SpiroBendClass.txt");
	if (InputFile.is_open())
	{
		std::string DocumentLine{};
		
		for (size_t i = 0; i < NameArraySize && std::getline(InputFile, DocumentLine); i++)
		{
			std::istringstream iss(DocumentLine);
			iss >> Name[i] >> Amount[i];
		}
		
		InputFile.close();
	}
	else
	{
		std::cerr << "File read Error - Unable to open the file SpiroBendClass.txt" << std::endl;
	}

}

void SpiroBendClass::TextDocumentWriter(AbstractClass& Obj)
{
	std::ofstream OutputFile("SpiroBendClass.txt");
	if (OutputFile.is_open())
	{
		for (size_t i = 0; i < NameArraySize; i++)
		{
			OutputFile << Name[i] << " " << Amount[i] << std::endl;
		}
		OutputFile.close();
	}
	else
	{
		std::cerr << "File write Error - Unable to write to the file SpiroBendClass.txt" << std::endl;
	}
}

// ----------------------------------	increase and decrease functions	----------------------------------

void SpiroBendClass::Increaser(AbstractClass& Obj, int* Amount, size_t index)
{
	if (index < NameArraySize)
	{
		int UserNum{};
		std::cin >> UserNum;	// Number to increase the Amount[index] by.

		Amount[index] += UserNum;	//	increments the original with the provided number.

		TextDocumentWriter(Obj);
	}
	else
	{
		std::cerr << "Error - failed to increase the item." << std::endl;
	}
}