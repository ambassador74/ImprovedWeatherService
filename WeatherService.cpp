#include "JsonService.h"
#include "XmlService.h"

int main() {
	JsonService js;
	Weather w = js.getWeather("weather.json");
	XmlService xs;
	Weather w2 = xs.getWeather("weather.xml");
	return 0;
}