int farleft;
int left;
int right;
int farright;
char path[100];
int pathlength=0,readlength=0;
int replaystage=0;

void setup() {
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(A4,INPUT);
  }
  void sense()
  {
    farleft=digitalRead(A1);
    left=digitalRead(A2);
    right=digitalRead(A3);
    farright=digitalRead(A4);
    }
void loop() {
  sense();
  if(farleft==0&&left==0&&right==0&&farright==0)
  {
    analogWrite(3,0);
    analogWrite(5,255);   //sharp left
    analogWrite(6,255);
    analogWrite(9,0);
    delay(20);
          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    
    
    }
    while(farleft==0&&left==0&&right==0&&farright==1)
  {
    analogWrite(3,0);
    analogWrite(5,255);   //left1
    analogWrite(6,255);
    analogWrite(9,0);
    delay(100);
        
          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    path[pathlength]='L';
    pathlength++;
    if(path[pathlength-2]='B')
    {
    shortpath();
    }
    sense();
    }
    if(farleft==0&&left==0&&right==1&&farright==1)
  {
    analogWrite(3,0);
    analogWrite(5,255);     //left2
    analogWrite(6,255);
    analogWrite(9,0);
        delay(20);
          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    }
    else if(farleft==0&&left==1&&right==1&&farright==1)
  {
    analogWrite(3,0);
    analogWrite(5,255);       //lef3
    analogWrite(6,255);
    analogWrite(9,0);
        delay(20);
          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    }
    else if(farleft==1&&left==0&&right==0&&farright==0)
  {
    analogWrite(3,255); 
    analogWrite(5,0);     //forward
    analogWrite(6,255);
    analogWrite(9,0);
    delay(20);
       
          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    sense();
    if(farleft==1&&left==0&&right==0&&farright==1)
    {
      analogWrite(3,255); 
    analogWrite(5,0);     //forward
    analogWrite(6,255);
    analogWrite(9,0);
    delay(20);
          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    }
    else
    {
            analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    replaystage=1;
    }
   
    
  }
   
    else if(farleft==1&&left==0&&right==0&&farright==1)
  {
    analogWrite(3,255); 
    analogWrite(5,0);     //forward
    analogWrite(6,255);
    analogWrite(9,0);
    delay(20);

          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    path[pathlength]='S';
    
    }
    else if(farleft==1&&left==1&&right==0&&farright==0)
  {
    analogWrite(3,255); 
    analogWrite(5,0);         //forward
    analogWrite(6,255);
    analogWrite(9,0);
        delay(20);
          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    }
    else if(farleft==1&&left==1&&right==1&&farright==0)
  {
    analogWrite(3,169); 
    analogWrite(5,0);       //right (f)
    analogWrite(6,255);
    analogWrite(9,0);
        delay(20);
          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    }
    while(farleft==1&&left==1&&right==1&&farright==1)
  {
    analogWrite(3,255); 
    analogWrite(5,0);   
    analogWrite(6,0);
    analogWrite(9,255);
        delay(20);
          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    path[pathlength]="U";
    pathlength++;
    sense();
    }

     if(farleft==0&&left==1&&right==0&&farright==0)
  {
    analogWrite(3,165);
    analogWrite(5,0);     //
    analogWrite(6,255);
    analogWrite(9,0);
        delay(20);
          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    }
    else if(farleft==0&&left==0&&right==1&&farright==0)
  {
    analogWrite(3,165);
    analogWrite(5,0);
    analogWrite(6,255);
    analogWrite(9,0);
        delay(20);
          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    }
    else if(farleft==1&&left==1&&right==0&&farright==1)
  {
    analogWrite(3,165); 
    analogWrite(5,0);
    analogWrite(6,255);
    analogWrite(9,0);
        delay(20);
          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    }
    else if(farleft==1&&left==0&&right==1&&farright==1)
  {
    analogWrite(3,165);
    analogWrite(5,0);
    analogWrite(6,255);
    analogWrite(9,0);
        delay(20);
          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    }
    else if(farleft==0&&left==0&&right==1&&farright==0)
  {
    analogWrite(3,100);
    analogWrite(5,0);
    analogWrite(6,255);
    analogWrite(9,0);
        delay(20);
          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    }
  else if(farleft==0&&left==1&&right==1&&farright==0)
  {
    analogWrite(3,0);
    analogWrite(5,0);
    analogWrite(6,255);
    analogWrite(9,0);
        delay(20);
          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    }
    else if(farleft==0&&left==1&&right==0&&farright==0)
  {
    analogWrite(3,165);
    analogWrite(5,0);
    analogWrite(6,255);
    analogWrite(9,0);
        delay(20);
          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    }
    if(replaystage==1)
    {
     while(1)
     {
      delay(200);
      sense();
      if(farleft==1&&left==0&&right==0&&farright==1)
      break;
     }
      replay();
    }
  // put your main code here, to run repeatedly:

}
void shortpath()
{
  if(path[pathlength-3]=='L'&&path[pathlength-1]=='L')
  {
    pathlength=pathlength-3;
    path[pathlength]='S';
  }
}
void replay()
{
  if(path[readlength]=='S')
  {
        analogWrite(3,165);
    analogWrite(5,0);
    analogWrite(6,255);
    analogWrite(9,0);
    
    readlength++;
  }
  else if(path[readlength]=='L')
  {
            analogWrite(3,165);
    analogWrite(5,0);
    analogWrite(6,255);
    analogWrite(9,0);
    delay(200);
    readlength++;
  }
    else
    {sense();
  if(farleft==0&&left==0&&right==0&&farright==0)
  {
    analogWrite(3,0);
    analogWrite(5,255);   //sharp left
    analogWrite(6,255);
    analogWrite(9,0);
        delay(20);
          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    
    
    }
    else if(farleft==0&&left==0&&right==1&&farright==1)
  {
    analogWrite(3,0);
    analogWrite(5,255);     //left2
    analogWrite(6,255);
    analogWrite(9,0);
        delay(20);
          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    }
    else if(farleft==0&&left==1&&right==1&&farright==1)
  {
    analogWrite(3,0);
    analogWrite(5,255);       //lef3
    analogWrite(6,255);
    analogWrite(9,0);
        delay(20);
          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    }
    else if(farleft==1&&left==0&&right==0&&farright==0)
  {
    analogWrite(3,255); 
    analogWrite(5,0);     //forward
    analogWrite(6,255);
    analogWrite(9,0);
    delay(100);
    sense();
    if(farleft==1&&left==0&&right==0&&farright==1)
    {
      analogWrite(3,255); 
    analogWrite(5,0);     //forward
    analogWrite(6,255);
    analogWrite(9,0);
        delay(20);
          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    }
    else
    {
            analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
        delay(20);
          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    }
   
    
  }
    else if(farleft==1&&left==1&&right==0&&farright==0)
  {
    analogWrite(3,255); 
    analogWrite(5,0);         //forward
    analogWrite(6,255);
    analogWrite(9,0);
        delay(20);
          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    }
    else if(farleft==1&&left==1&&right==1&&farright==0)
  {
    analogWrite(3,169); 
    analogWrite(5,0);       //right (f)
    analogWrite(6,255);
    analogWrite(9,0);
        delay(20);
          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    }

    else if(farleft==0&&left==1&&right==0&&farright==0)
  {
    analogWrite(3,165);
    analogWrite(5,0);     //
    analogWrite(6,255);
    analogWrite(9,0);
        delay(20);
          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    }
    else if(farleft==0&&left==0&&right==1&&farright==0)
  {
    analogWrite(3,165);
    analogWrite(5,0);
    analogWrite(6,255);
    analogWrite(9,0);
        delay(20);
          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    }
    else if(farleft==1&&left==1&&right==0&&farright==1)
  {
    analogWrite(3,165); 
    analogWrite(5,0);
    analogWrite(6,255);
    analogWrite(9,0);
        delay(20);
          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    }
    else if(farleft==1&&left==0&&right==1&&farright==1)
  {
    analogWrite(3,165);
    analogWrite(5,0);
    analogWrite(6,255);
    analogWrite(9,0);
        delay(20);
          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    }
    else if(farleft==0&&left==0&&right==1&&farright==0)
  {
    analogWrite(3,100);
    analogWrite(5,0);
    analogWrite(6,255);
    analogWrite(9,0);
        delay(20);
          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    }
  else if(farleft==0&&left==1&&right==1&&farright==0)
  {
    analogWrite(3,0);
    analogWrite(5,0);
    analogWrite(6,255);
    analogWrite(9,0);
        delay(20);
          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    }
    else if(farleft==0&&left==1&&right==0&&farright==0)
  {
    analogWrite(3,165);
    analogWrite(5,0);
    analogWrite(6,255);
    analogWrite(9,0);
        delay(20);
          analogWrite(3,0); 
    analogWrite(5,0);     //forward
    analogWrite(6,0);
    analogWrite(9,0);
    delay(200);
    }
    
    }
    replay();
}


