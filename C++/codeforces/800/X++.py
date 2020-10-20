if __name__ == "__main__":
    n=int(input())
    X=0

    while(n>0):
        p=str(input())
        if (p=="++X") | (p=="X++"):
            X+=1
        
        if(p=="--X") | (p=="X--"):
            X-=1
        n-=1
    print(X)