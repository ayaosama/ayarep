/*
 * DIO_prog.c
 *
 *  Created on: Jan 27, 2016
 *      Author: aya osama
 */


extern u8 DIO_u8WritePinDir(u8 Copy_u8PinIdx , u8 Copy_u8PinDir)
{
	u8 Local_u8PortIdx;
	u8 Locaal_u8ReturnVal
	Local_u8PortIdx=Copy_u8PinIdx/8;
	Copy_u8PinIdx=Copy_u8PinIdx%8;
 switch (Local_u8PortIdx)
 {
 	 case 0:

 		    if (Copy_u8PinDir==0)

			{
 		    	DDRA|=~(1<<Copy_u8PinIdx);
 		    	Locaal_u8ReturnVal=1;
			}
			else if(Copy_u8PinDir==1)

			{
				DDRA|=(1<<Copy_u8PinIdx);
			    Locaal_u8ReturnVal=1;
			}

			else
			{
			 printf("ERROR");

			}
 		    break;
	 case 1:

 		    if (Copy_u8PinDir==0)

			{
 		    	DDRB|=~(1<<Copy_u8PinIdx);
 		    	Locaal_u8ReturnVal=1;
			}
			else if(Copy_u8PinDir==1)

			{
				DDRB|=(1<<Copy_u8PinIdx);
				Locaal_u8ReturnVal=1;
			}

			else
			{
			 printf("ERROR");

			}
 		    break;
	 case 2:

 		    if (Copy_u8PinDir==0)

			{
 		    	DDRC|=~(1<<Copy_u8PinIdx);
 		    	Locaal_u8ReturnVal=1;
			}
			else if(Copy_u8PinDir==1)

			{
				DDRC|=(1<<Copy_u8PinIdx);
				Locaal_u8ReturnVal=1;
			}

			else
			{
			 printf("ERROR");

			}
 		    break;
	 case 3:

 		    if (Copy_u8PinDir==0)

			{
 		    	DDRD|=~(1<<Copy_u8PinIdx);
 		    	Locaal_u8ReturnVal=1;
			}
			else if(Copy_u8PinDir==1)

			{
				DDRD|=(1<<Copy_u8PinIdx);
				Locaal_u8ReturnVal=1;
			}

			else
			{
			 printf("ERROR");

			}
            break;
	 default:
		 Locaal_u8ReturnVal=-1;

 }
   return Locaal_u8ReturnVal;
}

extern u8 DIO_u8WritePortDir(u8 Copy_u8PortIdx , u8 Copy_u8PtrDir)

{
	u8 Locaal_u8ReturnVal;
   switch(Copy_u8PortIdx)
   {
   	   case 'A':
			if(Copy_u8PtrDir==0)
			 {
				 DDRA=0x00;
				 Locaal_u8ReturnVal=1;
			 }
			else if (Copy_u8PtrDir==1)
			 {
			     DDRA=0xFF;
			     Locaal_u8ReturnVal=1;
			 }
			break;
   	   case 'B':
   			if(Copy_u8PtrDir==0)
   			 {
   				 DDRB=0x00;
   				 Locaal_u8ReturnVal=1;
   			 }
   			else if (Copy_u8PtrDir==1)
   			 {
   			     DDRB=0xFF;
   			     Locaal_u8ReturnVal=1;
   			 }
   			break;
   	   case 'C':
   	   		if(Copy_u8PtrDir==0)
   	   		 {
   	   			 DDRC=0x00;
   	   			 Locaal_u8ReturnVal=1;
   	   		 }
   			else if (Copy_u8PtrDir==1)
   	   		 {
   	   			 DDRC=0xFF;
   	   			 Locaal_u8ReturnVal=1;
   	   		 }
   	   		break;
   	   case 'D':
   	   		if(Copy_u8PtrDir==0)
   	  		 {
   	   			 DDRD=0x00;
   	   			 Locaal_u8ReturnVal=1;
   			 }

   	   		else if (Copy_u8PtrDir==1)
   	   	   	 {
   	   	   	   	 DDRD=0xFF;
   	   	   	   	 Locaal_u8ReturnVal=1;
   	   	   	 }
   	   		break;
   	   default:
   		Locaal_u8ReturnVal=-1;
    }
   return Locaal_u8ReturnVal;
}
extern u8 DIO_u8ReadPinDir(u8 Copy_u8PinIdx , u8* Copy_u8PinToDir)
{
		u8 Local_u8PortIdx;
		u8 Locaal_u8ReturnVal;
		Local_u8PortIdx=Copy_u8PinIdx/8;
		Local_u8PortIdx=Copy_u8PinIdx%8;

	 switch (Local_u8PortIdx)
	 {
	 case 0:
			 if(PINA&(1<<Copy_u8PinIdx)==0)
			 {
				 * Copy_u8PinToDir=0;
				 Locaal_u8ReturnVal=1;
			 }
			 else if(PINA&(1<<Copy_u8PinIdx)==1)
			 {
				 * Copy_u8PinToDir=1;
				 Locaal_u8ReturnVal=1;
			 }
	 break;

	 case 1:
			 if(PINB&(1<<Copy_u8PinIdx)==0)
			 {
				* Copy_u8PinToDir=0;
				Locaal_u8ReturnVal=1;
			 }
			 else if(PINB&(1<<Copy_u8PinIdx)==1)
			 {
			 	* Copy_u8PinToDir=1;
			 	Locaal_u8ReturnVal=1;
			 }
		 break;

	 case 2:
			 if(PINC&(1<<Copy_u8PinIdx)==0)
			 {
				* Copy_u8PinToDir=0;
				Locaal_u8ReturnVal=1;
			 }
			 else if(PINC&(1<<Copy_u8PinIdx)==1)
			 {
			 	* Copy_u8PinToDir=1;
			 	Locaal_u8ReturnVal=1;
			 }
		 break;

	 case 3:
			 if(PIND&(1<<Copy_u8PinIdx)==0)
			 {
				 * Copy_u8PinToDir=0;
				 Locaal_u8ReturnVal=1;
			 }
			 else if(PIND(1<<Copy_u8PinIdx)==1)
				 Locaal_u8ReturnVal=1;
			 {
			 	 * Copy_u8PinToDir=1;
			 }
		 break;

	 default:
		 Locaal_u8ReturnVal=-1;
	 }
   return Locaal_u8ReturnVal;
}

extern u8 DIO_u8ReadPortDir(u8 Copy_u8PortIdx , u8* Copy_u8PtrToDir)
{


	switch(Copy_u8PortIdx)
	   {
	   	   case 'A':

				   if(PINA&0xFF==0x00)
					 {
					  * Copy_u8PtrToDir=0;
					  Locaal_u8ReturnVal=1;
					 }

				   else if(PINA&0xFF==0xFF)
						 {
							* Copy_u8PtrToDir=0xFF;
							Locaal_u8ReturnVal=1;
						 }
				   break;

	   	 case 'B':

	   		   		   if(PINB&0xFF==0x00)
	   		   		     {
	   		   			  * Copy_u8PtrToDir=0;
	   		   			  Locaal_u8ReturnVal=1;
	   		   		     }

	   		   		   else if(PINB&0xFF==0xFF)
	   		   			   	 {
	   		   			   		* Copy_u8PtrToDir=0xFF;
	   		   			   		Locaal_u8ReturnVal=1;
	   		   			   	 }
	   		   		   break;


	   	 case 'C':

	   		   		   if(PINC&0xFF==0x00)
	   		   		     {
	   		   			  * Copy_u8PtrToDir=0;
	   		   			  Locaal_u8ReturnVal=1;
	   		   		     }

	   		   		   else if(PINC&0xFF==0xFF)
	   		   			   	 {
	   		   			   		* Copy_u8PtrToDir=0xFF;
	   		   			   		Locaal_u8ReturnVal=1;
	   		   			   	 }
	   		   		   break;

	   	 case 'D':

	   		   		   if(PIND&0xFF==0x00)
	   		   		     {
	   		   			  * Copy_u8PtrToDir=0;
	   		   			  Locaal_u8ReturnVal=1;
	   		   		     }

	   		   		  else if(PIND&0xFF==0xFF)
	   		   			   	 {
	   		   			   		* Copy_u8PtrToDir=0xFF;
	   		   			   		Locaal_u8ReturnVal=1;
	   		   			   	 }
	   		   		   break;

	   		   	 default:
	   		   		 Locaal_u8ReturnVal=-1;

	  }
	return Locaal_u8ReturnVal;
	   }
