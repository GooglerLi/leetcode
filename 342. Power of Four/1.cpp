
/*第一种方法*/
/*bool isPowerOfFour(int num) {
    
    if(num <= 0)
        return false;
    
    if(num == 1)
        return true;
        
    int remainder;
    while(num>1)
    {
        remainder = num%4;
        if(remainder != 0 )
            return false;
        num = num/4;
    }
    
    return true;
}*/

/*第二种方法*/
bool isPowerOfFour(int num) {
    
    if(num <= 0)
        return false;
    
    if(num & (num-1))
        return false;
        
    if(num&0x55555555)
        return true;
  
    return false;
}

