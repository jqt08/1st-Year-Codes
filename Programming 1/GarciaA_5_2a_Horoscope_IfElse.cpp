//Use only if else

#include <stdio.h>
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;


int main()
{
   int day,month;
   string horoscope, monthName;
   string Aquarius, Pisces, Aries, Taurus, Gemini, Cancer, Leo, Virgo;
   string Libra, Scorpio, Sagittarius, Capricorn;
   Aquarius= 1;
   Pisces= 2;
   Aries= 3;
   Taurus= 4;
   Gemini= 5;
   Cancer= 6;
   Leo= 7;
   Virgo= 8;
   Libra= 9;
   Scorpio= 10;
   Sagittarius= 11;
   Capricorn= 12;
   
   
   
   cout<<"Enter a month: ";
   cin>>month;
   cout<<"Enter day: ";
   cin>>day;
   
   
   if (month == 1)
   {
   	monthName="January";
   	if (day<20)
   	horoscope= "Capricorn";
   	else
   	horoscope= "Aquarius";
   }
  
  
   else if (month == 2)
   {
   	monthName="February";
   	if (day<19)
   	horoscope= "Aquarius";
   	else
   	horoscope= "Pisces";
   }
   
   
    else if (month == 3)
   {
   	monthName="March";
   	if (day<21)
   	horoscope= "Pisces";
   	else
   	horoscope= "Aries";
   }
   
   
    else if (month == 4)
   {
   	monthName="April";
	if (day<20)
   	horoscope= "Aries";
   	else
   	horoscope= "Taurus";
   }
   
   
    else if (month == 5)
   {
   	monthName="May";
	if (day<21)
   	horoscope= "Taurus";
   	else
   	horoscope= "Gemini";
   }
  
  
    else if (month == 6)
   {
   	monthName="June";
   	if (day<21)
   	horoscope= "Gemini";
   	else
   	horoscope= "Cancer";
   }
  
  
    else if (month == 7)
   {
   	monthName="July";
   	if (day<23)
   	horoscope= "Cancer";
   	else
   	horoscope= "Leo";
   }
  
  
    else if (month == 8)
   {
   	monthName="August";
   	if (day<23)
   	horoscope= "Leo";
   	else
   	horoscope= "Virgo";
   }
  
  
    else if (month == 9)
   {
   	monthName="September";
   	if (day<23)
   	horoscope= "Virgo";
   	else
   	horoscope= "Libra";
   }
 
 
    else if (month == 10)
   {
   	monthName="October";
   	if (day<23)
   	horoscope= "Libra";
   	else
   	horoscope= "Scorpio";
   }
   
   
    else if (month == 11)
   {
   	monthName="November";
   	if (day<22)
   	horoscope= "Scorpio";
   	else
   	horoscope= "Sagittarius";
   }
    
	
	else if (month == 12)
   {
   	monthName="December";
   	if (day<22)
   	horoscope= "Sagittarius";
   	else
   	horoscope= "Aquarius";
   }
   
   
   
   cout<<"The Zodiac sign for "<<monthName <<" "<< day<<" is "<<horoscope;
    
    
    return 0;
}

