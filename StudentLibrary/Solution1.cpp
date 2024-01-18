#include "Solution1.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
	// Convert from Celsius
	if (_from == TemperatureUnits::CELSIUS)
	{
		if (_to == TemperatureUnits::FAHRENHEIT)
		{
			return (_value * 9.0f / 5.0f) + 32;
		}
		if (_to == TemperatureUnits::KELVIN)
		{
			return _value + 273.15f;
		}
	}
	// Convert from Fahrenheit
	else if (_from == TemperatureUnits::FAHRENHEIT)
	{
		if (_to == TemperatureUnits::CELSIUS)
		{
			return (_value - 32) * 5.0f / 9.0f;
		}
		if (_to == TemperatureUnits::KELVIN)
		{
			return (_value - 32) * 5.0f / 9.0f + 273.15f;
		}
	}
	// Convert from Kelvin
	else if (_from == TemperatureUnits::KELVIN)
	{
		if (_to == TemperatureUnits::CELSIUS)
		{
			return _value - 273.15f;
		}
		if (_to == TemperatureUnits::FAHRENHEIT)
		{
			return (_value - 273.15f) * 9.0f / 5.0f + 32;
		}
	}

	return _value;
}

#endif
