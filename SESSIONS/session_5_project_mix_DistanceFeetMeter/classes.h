class Meter;

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

		friend Meter Feet_To_Meter( Feet );
		friend Feet  Meter_To_Feet( Meter );
		
		friend Meter add_Waa_return_Meter( Feet , Meter );

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

		friend Meter Feet_To_Meter( Feet );
		friend Feet  Meter_To_Feet( Meter );
		
		friend Meter add_Waa_return_Meter( Feet , Meter );

};
