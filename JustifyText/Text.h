#pragma once
#include <string>
#include <fstream>

class Text
{
private:
	int width;
	char style;
	std::string rawText;
	std::string modText;

public:
	Text();
	Text(int pWidth, char pStyle);
	~Text();
};

