#include <stdio.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>


using namespace std;


int main()
{
    int M,D;
    string horoscope;

    cout<<"Enter a month: ";
    cin>>M;
    cout<<"Enter a day: ";
    cin>>D;
   
   switch(M)
   {
    case 1: horoscope = (D<=19) << (D>=20);
        cout<< "The Zodiac sign for January " << D << " is Capricorn" || " is Aquarius";
        break;
    case 2: horoscope = (D<=18) << (D>=19);
        cout<< "The Zodiac sign for February " << D << " is Aquarius" || " is Pisces";
        break;
    case 3: horoscope = (D<=20) << (D>=21);
        cout<< "The Zodiac sign for March " << D << " is Pisces" || " is Aries";
        break;
    case 4: horoscope = (D<=19) << (D>=20);
        cout<< "The Zodiac sign for April " << D << " is Aries" || " is Taurus";
        break;
    case 5: horoscope = (D<=20) << (D>=21);
        cout<< "The Zodiac sign for May " << D << " is Taurus" || " is Gemini";
        break;
    case 6: horoscope = (D<=20) << (D>=21);
        cout<< "The Zodiac sign for June " << D << " is Gemini" || " is Cancer";
        break;
    case 7: horoscope = (D<=22) << (D>=23);
        cout<< "The Zodiac sign for July " << D << " is Cancer" || " is Leo";
        break;
    case 8: horoscope = (D<=22) << (D>=23);
        cout<< "The Zodiac sign for August " << D << " is Leo" || " is Virgo";
        break;
    case 9: horoscope = (D<=22) << (D>=23);
        cout<< "The Zodiac sign for September " << D << " is Virgo" || " is Libra";
        break;
    case 10: horoscope = (D<=22) << (D>=23);
        cout<< "The Zodiac sign for October " << D << " is Libra" || " is Scorpio";
        break;
    case 11: horoscope = (D<=21) << (D>=22);
        cout<< "The Zodiac sign for November " << D << " is Scorpio" || " is Sagittarius";
        break;
    case 12: horoscope = (D<=21) << (D>=22);
        cout<< "The Zodiac sign for December " << D << " is Sagittarius" || " is Capricorn";
        break;
   }
    
    
    return 0;
}

