org 0000h 
mov a,#000 
mov p0,a 
mov p1,a 
mov p2,a 
mov p3,a 
setb p1.0 
setb p1.1 
setb p1.2 
setb p1.3 
switch: jnb p1.0,mode1 
 jnb p1.1,mode2 
 jnb p1.2,mode3 
 sjmp switch 
 mode1: setb p1.4 
setb p1.5 ;
jb p1.4,mode1 
motoron: setb p2.0
jb p1.5,motoron 
clr p2.0 ;
clr p1.4 
clr p1.5 
sjmp mode1 
mode2: setb p0.2 ;
setb p0.3 
setb p0.4 ;
here: jnb p0.4,here 
setb p2.0 ;
here1:jb p0.2,here1 
clr p2.0 ;
clr p0.2 
clr p0.3 
clr p0.4 
sjmp mode2
clr p2.0 
clr p1.4 
clr p1.5 
sjmp mode1 
mode2: setb p0.2 
setb p0.3 
setb p0.4 
here: jnb p0.4,here 
setb p2.0 
here1:jb p0.2,here1  
clr p2.0  
clr p0.2 
clr p0.3 
clr p0.4 
sjmp mode2
mode3:setb p0.3 
here2:jnb p0.3,here2 
setb p2.0 
here3: jb p0.3,here3 ;
clr p2.0 
clr p0.3
sjmp mode3 
end