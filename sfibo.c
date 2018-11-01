long sfibo(int n){
    
    static int stage = 2;
    static long nowValue = 1;
    static long prevValue = 1;
    long temp;
    
    if(stage < n){
        for(int i = stage; i < n; i++){
            temp = nowValue;
            nowValue = nowValue + prevValue;
            prevValue = temp;
        }
        
        stage = n;
    }
    
    else if(stage > n){
        for(int i = n; i < stage; i++){
            temp = prevValue;
            prevValue = nowValue - prevValue;
            nowValue = temp;
        }
        
        stage = n;
    }
    
    return nowValue;
    
    
    
}
