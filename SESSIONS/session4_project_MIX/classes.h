class Feet
{
	private:
		int ft;
		float inch;

	public:
		Feet();
		Feet(int ,float);
		Feet(const Feet &);
		int getFeet();
		int  showFeet();
};

class Meter
{
	private:
		int met;
		float cm;

	public:
		Meter();
		Meter(int ,float);
		Meter(const Meter &);
		int getMeter();
		int showMeter();
};
