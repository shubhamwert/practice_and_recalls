import sys
def T():
    t=int(input())
    while t>0:
        a, b = [int(x) for x in input().split()]
        a,b=a+1,b+1
        N=int(input())
        for i in range(0,N+1):
           print(int((a+b)//2),flush=True)
           s=input().strip()
           if(s=="CORRECT"):
               break
           else: 
               if(s=="TOO_SMALL"):
                   
                   a=int((a+b)//2)
                  

               else:
                   if(s=="TOO_BIG"):
                       
                       b=int((a+b)//2)
                       

                   else:
                       if(s=="WRONG_ANSWER"):
                           sys.exit()
                       else:
                           print("WRONG_INPUT")
                           print("a = ",a,"\nb = ",b)
                           sys.exit()

        t=t-1

T()