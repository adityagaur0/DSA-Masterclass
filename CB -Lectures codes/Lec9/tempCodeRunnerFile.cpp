int fibbo(int p){
    if(p==0||p==1){
        return p;

    }
    int i=2;
    int a=0;
    int b=1;
    int c;
    while(i<p){

        c=a+b;
        a=b;
        b=c;
        i++;
        
    }
    return c;


}

int pattern8(int n){


    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<< fibbo(num)<< " ";
            num++;
           

        }
        cout<<endl;
    }
    //int p = ;
    //cout<<fibbo(n);
    

}