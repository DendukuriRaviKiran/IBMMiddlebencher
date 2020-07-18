var x=msg.payload;
var y=x.substring(0,14);
var z=x.substring(14,20);
if(y =="ordercompleted")
{
 return (z);
}
else
{
 msg.payload=0;    
 return msg;   
}