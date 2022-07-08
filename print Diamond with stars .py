n = int(input('Please Enter A Fard Number: '))
s1 = '*'
s2 = ' '
d = 1
l = 1

for i in range(n):
    if l < (n+1)/2:
        print(s2*((n-d)//2) + s1*d + s2*((n-d)//2 ))
        d+=2
    if l >= (n+1)/2:
        print(s2*((n-d)//2) + s1*d + s2*((n-d)//2 ))
        d-=2
    l += 1
    


        
        
        
    
    