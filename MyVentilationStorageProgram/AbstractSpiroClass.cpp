#include "AbstractSpiroClass.h"


void AbstractSpiroClass::TextDocumentCreator(AbstractSpiroClass& Obj)
{
	std::ofstream OutputFile("AbstractSpiroClass.txt");
	if (OutputFile.is_open())
	{	
		OutputFile << "This class contains:" << std::endl;
		for (size_t i = 0; i <= 2; i++)
		{
			OutputFile << Name[i]  << Amount[i] << std::endl;
		}
		OutputFile.close();
	}
	else
	{
		OutputFile.open("AbstractSpiroClass.txt");

		OutputFile << "This class contains:" << std::endl;
		for (size_t i = 0; i <= 2; i++)
		{
			OutputFile << Name[i] << Amount[i] << std::endl;
		}
		OutputFile.close();

	}
}

void AbstractSpiroClass::TextDocumentReader(AbstractSpiroClass& Obj)
{
}
