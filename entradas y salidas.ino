int S1=11,S2=10, S3=9, S4=8 ;
int L1=7, L2=6 , L3=5;
bool A , B , C , D;
void setup()
{
  pinMode( L1, OUTPUT);
  pinMode( L2, OUTPUT);
  pinMode( L3, OUTPUT);
  
  pinMode( S1,INPUT);
  pinMode( S2,INPUT);
  pinMode( S3,INPUT);
  pinMode( S4,INPUT);

}
void loop()
{
  A= digitalRead(S1);
  B= digitalRead(S2);
  C= digitalRead(S3);
  D= digitalRead(S4);
  
 if( A==0 && B==0 &&C==1 && D==1)
 {
 digitalWrite( L1,LOW);
 digitalWrite( L2,LOW);
 digitalWrite( L3,LOW);
 
 }
  
   if ( A==0 && B==0 && C==0 && D==1)
  {
 digitalWrite( L1,HIGH);
 digitalWrite( L2,LOW);
 digitalWrite( L3,LOW);
  }
  
    if ( A==0 && B==0 && C==1 && D==0)
  {
 digitalWrite( L1,HIGH);
 digitalWrite( L2,LOW);
 digitalWrite( L3,LOW);
  }

  
 if ( A==0 && B==0 && C==0 && D==0)
  {
 digitalWrite( L1,LOW);
 digitalWrite( L2,LOW);
 digitalWrite( L3,HIGH);
  }

  if ( A==0 && B==1 && C==1 && D==1)
  {
 digitalWrite( L1,HIGH);
 digitalWrite( L2,LOW);
 digitalWrite( L3,LOW);
  }

if ( A==0 && B==1 && C==1 && D==0)
  {
 digitalWrite( L1,LOW);
 digitalWrite( L2,LOW);
 digitalWrite( L3,HIGH);
  }
  if ( A==0 && B==1 && C==0 && D==1)
  {
 digitalWrite( L1,LOW);
 digitalWrite( L2,LOW);
 digitalWrite( L3,HIGH);
  }
if ( A==0 && B==1 && C==0 && D==0)
  {
 digitalWrite( L1,HIGH);
 digitalWrite( L2,LOW);
 digitalWrite( L3,HIGH);
  }
  if ( A==1 && B==0 && C==1 && D==1)
  {
 digitalWrite( L1,LOW);
 digitalWrite( L2,LOW);
 digitalWrite( L3,LOW);
  }
if ( A==1 && B==0 && C==1 && D==0)
  {
 digitalWrite( L1,LOW);
 digitalWrite( L2,LOW);
 digitalWrite( L3,HIGH);
  }
  if ( A==1 && B==0 && C==0 && D==1)
  {
 digitalWrite( L1,LOW);
 digitalWrite( L2,LOW);
    digitalWrite( L3,HIGH);
  }
    
  
    if ( A==1 && B==0 && C==0 && D==0)
  {
 digitalWrite( L1,HIGH);
 digitalWrite( L2,LOW);
 digitalWrite( L3,HIGH);
  }
    if ( A==1 && B==1 && C==1 && D==1)
  {
 digitalWrite( L1,LOW);
 digitalWrite( L2,LOW);
 digitalWrite( L3,HIGH);
  }
    if ( A==1 && B==1 && C==1 && D==0)
  {
 digitalWrite( L1,HIGH);
 digitalWrite( L2,LOW);
 digitalWrite( L3,HIGH); }
      if ( A==1 && B==1 && C==0 && D==1)
  {
 digitalWrite( L1,HIGH);
 digitalWrite( L2,LOW);
 digitalWrite( L3,HIGH);
  }
      if ( A==1 && B==1 && C==0 && D==0)
  {
 digitalWrite( L1,HIGH);
 digitalWrite( L2,HIGH);
 digitalWrite( L3,HIGH);
  }
 
  
}
