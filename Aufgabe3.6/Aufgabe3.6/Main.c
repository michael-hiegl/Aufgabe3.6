//**************************************************************************
//**************************************************************************
//**
//**	Projekt: Aufgabe3.6	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 23.11.2021 18:28:38
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************


int main(void)
{
	//Variables
	float f_Herzfrequenz = 0;
	float f_Lebensjahre = 0;
	float f_Herzschlaege = 0;


	//Code
	printf("Bitte durchschnittliche Herzfrequenz eingeben:\n");
	scanf("%f", &f_Herzfrequenz);
	printf("Bitte Lebensjahre angeben: \n");
	scanf("%f", &f_Lebensjahre);
	f_Herzschlaege = (f_Herzfrequenz * 60 * 24 * 365 * f_Lebensjahre);
	printf("%1.0f Herzschlaege seit Ihrer Geburt", f_Herzschlaege);


	getchar();
	fflush(stdin);
	getchar();
	return 0;
}