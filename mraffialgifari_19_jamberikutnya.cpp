//PROGRAM JAM BERIKUTNYA
#include <iostream>

using namespace std;

int main()
{
   int hh, mm, ss;

   cout<<"Masukan Jam: ";
   cin>>hh;

   cout<<"Masukan Menit: ";
   cin>>mm;
   cout<<"Masukan Detik: ";
   cin>>ss;

	if (ss+1<60)
	{
	    ss=ss+1;
	}
    if (ss+1==60)
    {
        ss=0;
        mm=mm+1;
        if (mm+1<60)
        {
           mm==mm+1;
        }
    }
    if (mm==60)
        {
            mm=0;
            hh=hh+1;
            if (hh+1<24)
            {
                hh==hh+1;
            }
        }
    if (hh==24)
            {
                hh=0;
            }


  cout<<"Hasil jam setelah ditambah 1 detik "<<hh<<":"<<mm<<":"<<ss;


    return 0;
}
