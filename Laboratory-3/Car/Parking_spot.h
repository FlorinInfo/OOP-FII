class Parking_spot
{
	bool busy=false;
	char* culoare;
public:
	void SetColor(char* color);
	char* GetColor();
	void Busy();
	bool IsBusy();
};

