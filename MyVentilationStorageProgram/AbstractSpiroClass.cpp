#include "AbstractSpiroClass.h"


void AbstractSpiroClass::TextDocumentCreator(AbstractSpiroClass& Obj)
{
	std::ofstream OutputFile("AbstractSpiroClass.txt");
	if (OutputFile.is_open())
	{	
		for (size_t i = 0; i < NameArraySize; i++)
		{
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

		std::cerr << "Unable to open the file AbstractSpiroClass.txt" << std::endl;
	}
}

void AbstractSpiroClass::TextDocumentReader(AbstractSpiroClass& Obj)
{
	std::ifstream InputFile("AbstractSpiroClass.txt");
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
		std::cerr << "Unable to open the file AbstractSpiroClass.txt" << std::endl;
	}

}
