#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class Details
{
	public:
		
		char N[30],G[20],EMAIL[30];
		int AGE,ID;
		double CN;
		int choice;
	    int C;
	    float charges;
	    
	    // for ticket
	    int fNo,Charges;
	    char Class,Luggage;
	    char Time[30], Date[30], Seat[5], Gate[5], Carrier[10], Destination[20],From[5];
		
	void logo() {
		int i,j;
		
	// patern 1
	for (i = 0; i < 10; i++) {
		cout<<"\t\t\t\t\t";
		cout<<" ";
		for (j = 0; j < i ; j++) {
			cout<<">";
		}
		cout<<endl;
	}
//	patern 2
	for (i = 0; i < 5; i++) {
		for (j = 0; j < i ; j++) {
			cout<<" ";
		}
		cout<<">>";
		cout<<"\t\t\t\t\t";
		cout<<" ";
		for (j = 0; j < 10 + i ; j++) {
			cout<<">";
		}
		cout<<endl;
	}
	
//	patern 3
	for (i = 0; i < 3; i++) {
		
		for (j = 0; j < 100 ; j++) {
			cout<<">";
		}
		cout<<endl;
	}
//	patern 4
	for (i = 0; i < 5; i++) {
		for (j = 1; j < 5-i ; j++) {
			cout<<" ";
		}
		cout<<">>";
		cout<<"\t\t\t\t\t";
		cout<<" ";
		for (j = 14 - i; j > 0  ; j--) {
			cout<<">";
		}
		cout<<endl;	
	}
	
	// patern 5
	for (i = 0; i < 10; i++) {
		cout<<"\t\t\t\t\t";
		cout<<" ";
		for (j = 1; j < 10 - i ; j++) {
			cout<<">";
		}
		cout<<endl;
	}
	}
		
	void information()
	{
		cout<<endl<<"----------E N T E R   P A S S E N G E R   D E T A I L S ----------\n";
		
		cout<<endl<<"ID : ";
		cin>>ID;
		cout<<"Name : ";
		cin>>N;
		cout<<"Age : ";
		cin>>AGE;
		cout<<"Male or Female : ";
		cin>>G;
		cout<<"E-mail Id : ";
		cin>>EMAIL;
		cout<<"Conatct No. : ";
		cin>>CN;
	}
	
		void flights()
	{
		int fno,charges;
		
		cout<<"********** A I R L I N E S **********"<<endl;
		
		cout<<"1.Dubai"<<endl;
		cout<<"2.USA"<<endl;
		cout<<"3.England "<<endl;
		cout<<"4.Australia "<<endl;
	
		cout<<"\nEnter The Number of the Country which you want to book the flight : ";
		cin>>choice;
		cout<<"\n\n\n";
		
		switch(choice)
		{
			case 1:
				{
					cout<<"********** W E L C O M E   T O   D U B A I   A I R L I N E S **********\n"<<endl;
					
					cout<<"Sr.No.\t\tFlight No.\t\tDate\t\tTime\t\tCharges\n"<<endl;
					
					cout<<"1. \t\t121 \t\t\t03/12/2022\t07:30 AM\tRs. 12000"<<endl;
					cout<<"2. \t\t145 \t\t\t06/12/2022\t07:00 AM\tRs. 10000"<<endl;
					cout<<"3. \t\t224 \t\t\t09/12/2022\t08:00 PM\tRs. 9000"<<endl;
					
					cout<<"\nSelect The Flight You Want To Book : ";
					cin>>C;
					
					if(C == 1)
					{
						fno = 121;
						charges = 12000;
						cout<<"Flight No. : "<<fno<<endl;
						cout<<"Charges : "<<charges<<endl;
					}
					else if(C == 2)
					{
						fno = 145;
						charges = 10000;
						cout<<"Flight No. : "<<fno<<endl;
						cout<<"Charges : "<<charges<<endl;
					}
					else
					{
						fno = 224;
						charges = 9000;
						cout<<"Flight No. : "<<fno<<endl;
						cout<<"Charges : "<<charges<<endl;
					}
				}
				break;
				
			case 2:
				{
					cout<<"********** W E L C O M E   T O   U S A   A I R L I N E S **********\n"<<endl;
					
					cout<<"Sr.No.\t\tFlight No.\t\tDate\t\tTime\t\tCharges\n"<<endl;
					
					cout<<"1. \t\t284 \t\t\t03/12/2022\t07:00 PM\tRs. 30000"<<endl;
					cout<<"2. \t\t370 \t\t\t17/12/2022\t09:00 AM\tRs. 25000"<<endl;
					cout<<"3. \t\t527 \t\t\t22/12/2022\t12:00 PM\tRs. 27000"<<endl;
					
					cout<<"\nSelect The Flight You Want To Book : ";
					cin>>C;
					
					
					if(C == 1)
					{
						fno = 284;
						charges = 30000;
						cout<<"Flight No. : "<<fno<<endl;
						cout<<"Charges : "<<charges<<endl;
					}
				    if(C == 2)
					{
						fno = 370;
						charges = 25000;
						cout<<"Flight No. : "<<fno<<endl;
						cout<<"Charges : "<<charges<<endl;
					}
					if(C == 3)
					{
						fno = 527;
						charges = 27000;
						cout<<"Flight No. : "<<fno<<endl;
						cout<<"Charges : "<<charges<<endl;
					}
				}
				break;
			
			case 3:
				{
				   	cout<<"********** W E L C O M E   T O   E N G L A N D   A I R L I N E S **********\n"<<endl;
					
					cout<<"Sr.No.\t\tFlight No.\t\tDate\t\tTime\t\tCharges\n"<<endl;
					
					cout<<"1. \t\t525 \t\t\t13/12/2022\t02:00 PM\tRs. 33000"<<endl;
					cout<<"2. \t\t667 \t\t\t18/12/2022\t09:00 AM\tRs. 29000"<<endl;
					
					cout<<"\nSelect The Flight You Want To Book : ";
					cin>>C;
					
					if(C == 1)
					{
						fno = 525;
						charges = 33000;
						cout<<"Flight No. : "<<fno<<endl;
						cout<<"Charges : "<<charges<<endl;
					}
					else
					{
						fno = 667;
						charges = 29000;
						cout<<"Flight No. : "<<fno<<endl;
						cout<<"Charges : "<<charges<<endl;
					}
				}
				break;
			
			case 4:
				{
					cout<<"********** W E L C O M E   T O   A U S T R A L I A   A I R L I N E S **********\n"<<endl;
					
					cout<<"Sr.No.\t\tFlight No.\t\tDate\t\tTime\t\tCharges\n"<<endl;
					
					cout<<"1. \t\t875 \t\t\t13/12/2022\t02:00 PM\tRs. 39000"<<endl;
					cout<<"2. \t\t999 \t\t\t18/12/2022\t09:00 AM\tRs. 43000"<<endl;
					
					cout<<"\nSelect The Flight You Want To Book : ";
					cin>>C;
					
					
					if(C == 1)
					{
						fno = 875;
						charges = 39000;
						cout<<"Flight No. : "<<fno<<endl;
						cout<<"Charges : "<<charges<<endl;
					}
					else
					{
						fno = 999;
						charges = 43000;
						cout<<"Flight No. : "<<fno<<endl;
						cout<<"Charges : "<<charges<<endl;
					}	
				}
				break;
				
			default :
				{
					cout<<"Enter Valid Country.....\n"<<endl;
				}
		}
    }
    	
    
	int Search(int);
	
	void SetTicket() {
		
		flight:
		cout<<"Enter your Flight No. : ";
		cin>>fNo;
		cout<<"\n\n";
				
		// Dubai
		if (fNo == 121) {
			fNo = 121;
			strcpy (Time,"07:30 AM");
			strcpy (Date,"03/12/2022");
			Charges = 12000;
			Class = 'A'; 
			strcpy (Seat,"8A");
			strcpy(Gate,"K19");
			Luggage = 'X';
			strcpy(Carrier,"AC");
			strcpy(Destination,"Dubai");
			strcpy(From, "INDIA");
		} else if (fNo == 145) {
			fNo = 145;
			strcpy(Time,"07:00 AM");
			strcpy(Date,"06/12/2022");
			Charges = 10000;
			Class = 'B'; 
			strcpy(Seat,"24B");
			strcpy(Gate,"M24");
			Luggage = 'Y';
			strcpy(Carrier,"NON/AC");
			strcpy(Destination,"Dubai");
			strcpy(From, "INDIA");
		} else if (fNo == 224) {
			fNo = 224;
			strcpy(Time,"08:00 AM");
			strcpy(Date,"09/12/2022");
			Charges = 9000;
			Class = 'C'; 
			strcpy(Seat,"14C");
			strcpy(Gate, "P4");
			Luggage = 'Z';
			strcpy(Carrier, "NON/AC");
			strcpy(Destination,"Dubai");
			strcpy(From, "INDIA");
		}
		// USA 
		else if (fNo == 284) {
			fNo = 284;
			strcpy(Time,"07:00 PM");
			strcpy(Date,"03/12/2022");
			Charges = 30000;
			Class = 'A'; 
			strcpy(Seat,"34A");
			strcpy(Gate,"S23");
			Luggage = 'A';
			strcpy(Carrier,"AC");
			strcpy(Destination,"USA");
			strcpy(From, "INDIA");
		} else if (fNo == 370) {
			fNo = 370;
			strcpy(Time,"09:00 AM");
			strcpy(Date,"17/12/2022");
			Charges = 25000;
			Class = 'C'; 
			strcpy(Seat, "21C");
			strcpy(Gate, "T20");
			Luggage = 'C';
			strcpy(Carrier, "NON/AC");
			strcpy(Destination, "USA");
			strcpy(From, "INDIA");
		} else if (fNo == 427) {
			fNo = 427;
			strcpy(Time, "12:00 PM");
			strcpy(Date,"22/12/2022");
			Charges = 27000;
			Class = 'B'; 
			strcpy(Seat, "51B");
			strcpy(Gate,"R14");
			Luggage = 'B';
			strcpy(Carrier,"NON/AC");
			strcpy(Destination, "USA");
			strcpy(From, "INDIA");
		} 
		// England
		else if (fNo == 525) {
			fNo = 525;
			strcpy(Time,"02:00 PM");
			strcpy(Date, "13/12/2022");
			Charges = 33000;
			Class = 'A'; 
			strcpy(Seat, "27A");
			strcpy(Gate,"G18");
			Luggage = 'E';
			strcpy(Carrier, "AC");
			strcpy(Destination, "England");
			strcpy(From, "INDIA");
		} else if (fNo == 677) {
			fNo = 677;
			strcpy(Time, "09:00 AM");
			strcpy(Date, "18/12/2022");
			Charges = 29000;
			Class = 'B'; 
			strcpy(Seat, "3B");
			strcpy(Gate, "H31");
			Luggage = 'F';
			strcpy(Carrier, "NON/AC");
			strcpy(Destination, "England");
			strcpy(From, "INDIA");
		}
		// Australia
		else if (fNo == 875) {
			fNo = 875;
			strcpy(Time, "02:00 AM");
			strcpy(Date, "13/12/2022");
			Charges = 39000;
			Class = 'B'; 
			strcpy(Seat, "29B");
			strcpy(Gate, "U17");
			Luggage = 'J';
			strcpy(Carrier, "NON/AC");
			strcpy(Destination, "Australia");
			strcpy(From, "INDIA");
		} else if (fNo == 999) {
			fNo = 999;
			strcpy(Time, "09:00 AM");
			strcpy(Date, "18/12/2022");
			Charges = 43000;
			Class = 'A'; 
			strcpy(Seat, "1A");
			strcpy(Gate, "Q15");
			Luggage = 'I';
			strcpy(Carrier, "AC");
			strcpy(Destination, "Australia");
			strcpy(From, "INDIA");
		} else {
			cout<<"Please enter valid flight no."<<endl;
			goto flight;
		}	
	}
	
	void Payment() {
		
		int choice,cNo,exDate,bank,CWNo,uId;
		char pass[20];
		cout<<"How would you like to pay ?\n\n";
		cout<<"1. Debit Card\n";
		cout<<"2. Credit Card\n";
		cout<<"3. Net Banking\n\n";
		cout<<"Enter your choice : ";
		cin>>choice;
		
		if (choice == 1) {
			cout<<"Enter Card No. : ";
			cin>>cNo;
			cout<<"Enter expiry date [Y][M] : ";
			cin>>exDate;
			if (exDate > 2211) {
				cout<<"Enter CW No. : ";
				cin>>CWNo;
				cout<<"\n\nTransaction Successful\n";
				cout<<"Name : "<<N;
			} else if (exDate < 2211) {
				cout<<"Sorry! Your Card Is Out Of Date\n";
			} else {
				cout<<"Please enter valid date in [Month][Year] format\n";
			}
			
		} else if (choice == 2) {
			    cout<<"Enter CW No. : ";
				cin>>CWNo;
				cout<<"Enter expiry date [Y][M] : ";
			    cin>>exDate;
			    if (exDate > 2211) {
			    	cout<<"Enter Password : ";
			    	cin>>pass;
			    	cout<<"\n\nTransaction Successful\n";
				    cout<<"Name : "<<N;
				} else if (exDate < 2211) {
				     cout<<"Sorry! Your Card Is Out Of Date\n";
		     	}    else {
				     cout<<"Please enter valid date in [Month][Year] format\n";
		     	}
		}  else if (choice == 3) {
			
			cout<<"Banks Available\n\n";
			cout<<"1. HDFC Bank\n";
			cout<<"2. ICICI Bank\n";
			cout<<"3. Axis Bank\n";
			cout<<"4. State Bank Of India\n";
			cout<<"5. Others\n";
			cout<<"Select your Bank : ";
			cin>>bank;
			
			if (bank == 1 || bank == 2 || bank == 3 || bank == 4 || bank == 5) {
				cout<<"Enter User Id : ";
				cin>>uId;
				cout<<"Enter Password : ";
				cin>>pass;
				cout<<"\n\nTransaction Successful\n";
				cout<<"Name : "<<N;
			} else {
				cout<<"Please enter valid input\n";
			}
		}
	}
	
	void DisplayTicket() {
		
		strupr(N);
		strupr(Destination);
		
	cout<<"->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n";
	cout<<"|\t\t\t\t\t\t\t\t\t\t|\n";
	cout<<"|\t\t\t B O A R D I N G   P A S S \t\t\t\t|\n";
	cout<<"|\t\t\t\t\t\t\t\t\t\t|\n";
	cout<<"|\tFLIGHT NO.\t BOARDING TIME\t\t GATE\t\t SEAT\t\t|\n";
		
	cout<<"|\t"<<fNo<<"\t\t "<<Time<<"\t\t "<<Gate<<"\t\t "<<Seat<<"\t\t|\n";
	cout<<"|\t\t\t\t\t\t\t\t\t\t|\n";
	cout<<"|\t\t\t\t\t\t\t\t\t\t|\n";

	cout<<"|\tPASSENGER NAME: "<<N;
	
	if(N[20] == N[8] || N[20] == N[1] || N[20] == N[2] || N[20] == N[3] || N[20] == N[4] || N[20] == N[5] || N[20] == N[6] || N[20] == N[7]) {
		cout<<"\t\t\t CLASS: "<<Class<<"\t\t\t|\n";
	}
	else if(N[20] == N[8] || N[20] == N[9] ||N[20] == N[10] || N[20] == N[11] || N[20] == N[12] || N[20] == N[13] || N[20] == N[14] || N[20] == N[15] ) {
		cout<<"\t\t CLASS: "<<Class<<"\t\t\t|\n";
	} else if (N[20] == N[16] || N[20] == N[17] || N[20] == N[18] || N[20] == N[19] || N[20] == N[20] ) {
		cout<<"\t CLASS: "<<Class<<"\t\t\t|\n";
	} 
	
	cout<<"|\t\t\t\t\t\t\t\t\t\t|\n";
	
	cout<<"|\tFROM: "<<From<<"\t\t\t\t TO: "<<Destination<<"\t\t\t|\n";
	cout<<"|\t\t\t\t\t\t\t\t\t\t|\n";
	
	cout<<"|\tDATE: "<<Date<<"\t\t\t TIME: "<<Time<<"\t\t\t|\n";
	cout<<"|\t\t\t\t\t\t\t\t\t\t|\n";
	
	cout<<"|\tCARRIER: "<<Carrier<<"\t\t\t\t LUGGAGE: "<<Luggage<<"\t\t\t|\n";
	cout<<"|\t\t\t\t\t\t\t\t\t\t|\n";
	
	cout<<"->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n";
	}
};

int Details :: Search(int a)
{
	if (ID == a) {
		cout<<"Ticket Found"<<endl;
		return  1;
	}
	else {
		return 0;
	}
}

int main()
{
	int lchoice;
		int schoice;
		int back,i,n,found,m;
	
	Details x[10];
	
	for (i=0;i<1;i++) {
		x[i].logo();
	}
	
	do 
	{
		cout<<"\tI N T E R N A T I O N A L   A I R L I N E S \n"<<endl;
		cout<<"\t___________________Menu___________________\n"<<endl;
		cout<<"\t-----------------------------------------"<<endl;

		cout<<"\t|\t Press 1 to register flight   \t|"<<endl;
		cout<<"\t|\t Press 2 to view ticket   \t|"<<endl;
		cout<<"\t|\t Press 3 to cancel ticket   \t|"<<endl;
		cout<<"\t|\t Press 4 for Exit         \t|"<<endl;
		cout<<"\t-----------------------------------------"<<endl;
	
    	cout<<"Enter Your Choice : ";
    	cin>>lchoice;
    	
    	switch(lchoice)
    	{
    		case 1:
    			{
    				cout<<endl<<"How many tickets do you want to register : ";
    				cin>>n;
    				cout<<endl;
    				cout<<"**********---------- B O O K   A   F L I G H T ----------**********\n"<<endl;
	    			for(i=0;i<n;i++)
    				{
    					x[i].flights();
    					cout<<endl;
					}
					for(i=0;i<n;i++)
    				{
    					x[i].information();
    					cout<<endl;
					}
					cout<<"Your Details Are Saved Sucessfully...\n\n";
					cout<<"**********---------- P A Y M E N T S ----------**********\n\n";
					for(i=0;i<n;i++)
    				{
    					x[i].Payment();
    					cout<<endl;
					}
					cout<<"\nYou Have Successfully Registered Flight\n\n";
					cout<<"___________________________________________________________________________________________________________________________________________________________________________________________________________________"<<endl<<endl;
	        	}
	        	break;
			
		        case 2:
			    {
				    cout<<"**********---------- G E T   Y O U R   T I C K E T ----------**********\n"<<endl;
				    cout<<"Enter your ID : ";
				    cin>>m;
				    for(i=0;i<n;i++)
				    {
					    found = x[i].Search(m);
					    cout<<endl;
					if (found)
					{
						x[i].SetTicket();
						x[i].DisplayTicket();
						break;
					} if (!found) {
						cout<<"Not found"<<endl;
					}
				    }    
					}
				cout<<"\n___________________________________________________________________________________________________________________________________________________________________________________________________________________"<<endl<<endl;
			    break;
			    
			    case 3:
			    	cout<<" *****---------------C A N C E L L I N G   T I C K E T---------------*****"<<endl;
			    	int q;
					char cancel;
			    	cout<<"Enter your ID : ";
			    	cin>>q;
			    	retry:
			    	cout<<"Are you sure want to cancel the ticket ? [Y/N] : ";
			    	cin>>cancel;
			    	if (cancel == 'Y' || cancel == 'y')
			    	{
			    		for(i=0;i<n;i++)
				        {
					    found = x[i].Search(q);
					    cout<<endl;
					    
					    if (found) {
					    	system("CLS");
			    		    cout<<"Ticket Cancelled...!"<<endl;
			    		    cout<<"Your Funds Will be Refended Shortly..!\n\n";
						}
					    }
					    if (!found)
					    {
					    	cout<<"Sorry No ticket found for ID "<<q<<"...!"<<endl;
						}	
					}
					else if (cancel == 'N' || cancel == 'n')
					{
						break;
					} else {
						cout<<"Sorry...! Please enter valid input.."<<endl;
						goto retry;
					}
					cout<<"___________________________________________________________________________________________________________________________________________________________________________________________________________________\n\n"<<endl<<endl;
					break;
		    
		        case 4:
		        {
			       cout<<"Press Any Key To Exit....\n"<<endl;
			    }
			    break;
			
		        default :
        	    {
			      cout<<"Invalid Input...."<<endl;
			    }
	    } 
	} while (lchoice != 4);
	return 0;
}
