#include <iostream>
#include "Binary.h"

Binary::Binary()
{
	bin = 0;
	negative = false;
	dec = 0;
}

Binary::Binary(int in_bin, bool in_negative)
{
	if (is_bin(in_bin))
	{
		bin = in_bin;
		negative = in_negative;
		dec = Bin_to_dec();
	}
	else
		std::cout << "The first field requires a number of 0 and 1";
}

Binary::Binary(int in_dec)
{
	dec = in_dec;
	if (dec < 0)
		negative = true;
	bin = Dec_to_bin();
}

int Binary::Show_dec()
{
	return dec;
}

int Binary::Show_bin()
{
	return bin;
}

Binary Binary::operator + (Binary y)
{
		return Binary();
}

Binary Binary::operator-(Binary y)
{
	return Binary();
}

Binary Binary::operator=(Binary y)
{
	return Binary();
}

bool Binary::operator>(Binary y)
{
	return false;
}

bool Binary::operator<(Binary y)
{
	return false;
}

bool Binary::operator==(Binary y)
{
	return false;
}

bool Binary::operator!()
{
	return false;
}

bool Binary::operator!=(Binary y)
{
	return false;
}

int Binary::Bin_to_dec()
{
	return 0;
}

int Binary::Dec_to_bin()
{
	return 0;
}

bool Binary::is_bin(int in_bin)
{

	return false;
}

