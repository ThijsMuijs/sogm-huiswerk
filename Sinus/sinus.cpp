#include <iostream>
#include <math.h>

using namespace std;

int main()
{
int SAMPLERATE = 48000;
int FREQ = 480;
float periode = 1;
int samples = round(SAMPLERATE/FREQ);

for(float count = 0; count <= ((samples*0.01)*periode) ; count += 0.01)
{
float amplitude = sin((2*M_PI)*count);
cout << amplitude << endl;

}

return 0;
}