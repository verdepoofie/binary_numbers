#pragma once

class Binary
{
public:
	Binary();
	Binary(int in_bin, bool in_negative);
	Binary(int in_dec);
	int Show_dec();
	int Show_bin();
	Binary operator + (Binary y);
	Binary operator - (Binary y);
	Binary operator = (Binary y);
	bool operator > (Binary y);
	bool operator < (Binary y);
	bool operator == (Binary y);
	bool operator ! ();
	bool operator != (Binary y);
protected:
	int Bin_to_dec();
	int Dec_to_bin();
	bool is_bin(int in_bin);
	int bin;
	int dec;
	bool negative;
};

