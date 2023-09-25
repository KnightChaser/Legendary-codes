// $ to Cents

﻿

public static void main(String[] args) {
System.out.print ("Please enter the number of
coins in pennies: ");
int numCents = new Scanner(System.in).nextInt(); System.out.print(((numCents==0)?"No Change\n": "Your change is: \n"+ (((numCents/500>0)?" " + numCents/500 +$5 coin"+ ((numCents/500>1)?"s":"")+"\n":"")+ ((C numCents%500)/100>0)?" " + ((numCents 500)/100) + " $1 coin"+ ((((numCents%500)/100)>1)?"s":"")+"\n":"")+ ((((( numCents 500) %100)/50)>0)?" " + (((numCents $500) %100)/50) + "$0.50 coin" + (((((numCents $500) %100)/50) >1)?"s":"")+ "\n":"")+ ((((((numCents $500) %100) 850)/25) >0)?" " + (((( numCents $500) %100) 50)/25)+" $0.25 coin"+ ((((((numCents% 500) 8100) 850)/25) >1)?"s":"")+"\n":"") + (((((((numCents $500 )%100) %50) 825)/10)>0)?" " + (((((numCents $500) %100) %50) $25 )/10)+" $0.10 coin"+ (((((((numCents%500) %100) %50) 825)/10 >>1)?"s":"")+"\n":"") + ((((((((numCents%500) %100) %50) %25) % + ((((((numCents $500) %100) %50) 825)%10)/5) + "$0.05 coin"+((((((((numCents $500) %100) %50) 825) %10)/5)>1 )?"s":"")+"\n":"")+ ((((((((numCents%500) %100) %50) %25)%10 )85)>0)?" " + ((((((numCents 500) %100) %50) 825) %10) %5) + " $0.01 coin" + ( ( ( ( ( ( ( (numCents $500) $100) $50) $25) %10) 85) >1)? "s":"")+"\n":""))));
10)/5)>0)?"
